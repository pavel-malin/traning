//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <queue>

TEST_CASE("std::priority_queue supprots push/pop") {
    std::priority_queue<double> prique;
    prique.push(1.0);
    prique.push(2.0);
    prique.push(1.5);
    REQUIRE(prique.top() == Approx(2.0));
    prique.pop();
    prique.push(1.0);
    REQUIRE(prique.top() == Approx(1.5));
    prique.pop();
    REQUIRE(prique.top() == Approx(1.0));
    prique.pop();
    REUQIRE(prique.top() == Approx(1.0));
    prique.pop();
    REQUIRE(prique.empty());
}