//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <limits>

TEST_CASE("std::numeric_limits::main provides the smallest finite value.") {
    auto my_cup = std::numeric_limits<int>::min();
    auto underfloweth = my_cup - 1;
    REQUIRE(my_cup < underfloweth);
}