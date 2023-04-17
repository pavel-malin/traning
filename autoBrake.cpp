#include <cstdio> // bug STOP!!!!!


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


template <typename T>
struct AutoBrake {
    AutoBrake(const T& publish) : publish{ publish } { }
    void observe(const SpeedUpdate& cd) { }
    void observe(const CarDetected& cd) { }
    void set_collision_threshold_s(double x) {
        collision_threshold_s = x;
    }
    double get_collision_threshold_s() const {
        return collision_threshold_s;
    }
    double get_speed_mps() const {
        return speed_mps;
    }
private:
    double collision_threshold_s;
    double speed_mps;
    const T& publish;

};

int main() {
    AutoBrake auto_brake{( auto& cmd ) { /// <----- here error (BUG!!!!!!!!!!)
        auto_brake.publish(cmd);
        } 
    };
    while (true) {
        auto_brake.observe(SpeedUpdate{ 10L });
        auto_brake.observe(CarDetected{250L, 25L });
    }
}