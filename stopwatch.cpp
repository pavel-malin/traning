//
// Created by haskroms on 22.04.23.
//
#include <cstdio>
#include <cstdint>
#include <chrono>

struct Stopwatch {
    Stopwatch(std::chrono::nanoseconds& result)
        : result{ result },
        start{ std::chrono::high_resolution_clock::now() } { }
    ~Stopwatch() {
        result = std::chrono::high_resolution_clock::now() - start;
    }
private:
    std::chrono::nanoseconds& result;
    const std::chrono::time_point<std::chrono::high_resolution_clock> start;
};

int main() {
    const size_t n = 1'000'000;
    std::chrono::nanoseconds elapsed;
    {
        Stopwatch stopwatch{ elapsed };
        volatile double result{ 1.23e45 };
        for (double i = 1; i < n; i++) {
            result /=  i;
        }
    }
    auto time_per_division = elapsed.count() / double{ n };
    printf("Took %gns per division.", time_per_division);
}