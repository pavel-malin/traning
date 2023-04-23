//
// Created by haskroms on 22.04.23.
//
#include <thread>
#include <chrono>

TEST_CASE("std::chrono used to sleep") {
    using namespace std::literals::std::chrono_literals;
    auto start = std::chrono::system_clock::now();
    std::this_thread::sleep_for(100ms);
    auto end = std::chrono::system_clock::now();
    REQUIRE(end - start >= 100ms);
}