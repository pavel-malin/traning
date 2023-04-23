// new file testsuccessful, for list 365
#define CATCH_CONFIG_MAIN
#include <cstdio>
#include <exception>
#include <stdexcept>
#include <functional>
#include "uniTest.cpp"

using SpeedUpdateCallback = std::function<void(const SpeedUpdate&)>;
using CarDetectedCallback = std::function<void(const CarDetected&)>;

struct IServiceBus {
    virtual ~IServiceBus() = default;
    virtual void publish(const BrakeCommand&) = 0;
    virtual void subscribe(SpeedUpdateCallback) = 0;
    virtual void subscribe(CarDetectedCallback) = 0;
};

struct  MockServiceBus : IServiceBus {
    void publish(const BrakeCommand& cmd) override {
        commands_published++;
        last_command = cmd;
    }

    void subscribe(SpeedUpdateCallback callback) override {
        speed_update_callback = callback;
    }

    void subscribe(CarDetectedCallback callback) override {
        car_detected_callback = callback;
    }

    BrakeCommand last_command{};
    int commands_published{};
    SpeedUpdateCallback speed_update_callback{};
    CarDetectedCallback car_detected_callback{};
};

struct SpeedUpdate {
    double velocity_mps;
};

struct CarDetected {
    double distance_m;
    double velocity_mps;
};

struct BrakeCommand {
    double time_to_collision_s;
};

//template <typename T>
struct AutoBrake {
    AutoBrake(IServiceBus& bus) : collision_threshold_s{ 5 },
                                  speed_mps{} { 
                                  }
    bus.subscribe([this](const SpeedUpdate& update) {
        speed_mps = update.velocity_mps;
    });
    bus.subscribe([this, &bus](const CarDetected& cd) {
        const auto realtive_velocity_mps = speed_mps - cd.velocity_mps;
        const auto time_to_collision_s = cd.distance_m / realtive_velocity_mps;
        if (time_to_collision_s > 0 &&
            time_to_collision_s <= get_collision_threshold_s) {
                bus.publish(BrakeCommand{ time_to_collion_s });
            }
    });
    void set_collision_threshold_s(double x) {
        if (x < 1) throw std::invalid_argument{ "Collision less than 1." }; 
        collision_threshold_s = x;
    }

    double get_collision_threshold_s() const {
        return collision_threshold_s;
    }

    double get_speed_mps() const {
        return speed_mps;
    }
    void observe(const CarDetected& cd) {
        const auto realtive_velocity_mps = speed_mps - cd.velocity_mps;
        const auto time_to_collision_s = cd.distance_m / realtive_velocity_mps;
        if (time_to_collision_s > 0 &&
            time_to_collision_s <= collision_threshold_s) {
                publish(BrakeCommand{ time_to_collision_s });
            }
    }

private:
    double collision_threshold_s;
    double speed_mps;
};

constexpr void assert_that(bool statement, const char* message) {
    if (!statement) throw std::runtime_error{ message };
}

void initial_speed_is_zero() {
    MockServiceBus bus{};
    AutoBrake auto_brake{ bus };
    assert_that(auto_brake.get_speed_mps() == 0L, "speed not equal 0");
}
void initial_speed_is_five() {
    MockServiceBus bus{};
    AutoBrake auto_brake{ bus };
    assert_that(auto_brake.get_collision_threshold_s() == 5L,
                "sensitivity is not 5");
}

void run_test(void(*unit_test)(),const char* name){
    try {
        unit_test();
        printf("[+] Test %s successful.\n", name);
    } catch (const std::exception& e) {
        printf("[-] Test failure in %s. %s.\n", name, e.what());
    }
}
void sensitivity_greater_than_1() {
    MockServiceBus bus{};
    AutoBrake auto_brake{ bus };
    try {
        auto_brake.set_collision_threshold_s(0.5L);
    } catch (const std::exception&) {
        return;
    }
    assert_that(false, "no exeption throw");
}

void no_alert_when_not_imminent() {
    MockServiceBus bus{};
    AutoBrake auto_brake{ bus };
    auto_brake.set_collision_threshold_s(2L);
    bus.speed_update_callback(SpeedUpdate{ 100L });
    bus.speed_update_callback(CarDetected{ 1000L, 50L });
    assert_that(bus.commands_published == 0, "brake command published");

}

void speed_is_saved() {
    MockServiceBus bus{};
    AutoBrake auto_brake{ bus };

    bus.speed_update_callback(SpeedUpdate{ 100L });
    assert_that(100L == auto_brake.get_speed_mps(), "speed not saved to 100");
    bus.speed_update_callback(SpeedUpdate{ 50L });
    assert_that(50L == auto_brake.get_speed_mps(), "speed not saved to 50");
    bus.speed_update_callback(SpeedUpdate{ 0L });
    assert_that(0L == auto_brake.get_speed_mps(), "speed not saved to 0");
}

void alert_when_imminent() {
    MockServiceBus bus{};
    AutoBrake auto_brake { bus };
    auto_brake.set_collision_threshold_s(10L);
    bus.speed_update_callback(SpeedUpdate{ 100L });
    bus.car_detected_callback(CarDetected{ 100L, 0L});
    assert_that(bus.commands_published == 1, "1 brake command was not published");
    assert_that(bus.last_command.time_to_collision_s == 1L, 
                "time to collision not computed correctly.");
}

TEST_CASE("initial car speed is zero") {
    MockServiceBus bus{};
    AutoBrake auto_brake{ bus };
    REQUIRE(auto_brake.get_speed_msp() == 0);
}

int main() {
    run_test(initial_speed_is_zero, "initial speed is 0");
    run_test(initial_speed_is_five, "initial speed is 5");
    run_test(sensitivity_greater_than_1, "sensitivity greater than 1");
    run_test(speed_is_saved, "speed is saved");  
    run_test(alert_when_imminent, "brake commands published not one.");
}