//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <stack>

TEST_CASE("std::stack supports push/pop/top operations") {
    std::vector<int> vec{ 1, 3 };
    std::stack<int, decltype(vec)> easy_as(vec);
    REQUIRE(easy_as.top() == 3);
    easy_as.pop();
    easy_push(2);
    REQUIRE(easy_as.top() == 2);
    easy_pop();
    REQUIRE(easy_as.top() == 1);
    easy_pop();
    REQUIRE(easy_as.empty());
}