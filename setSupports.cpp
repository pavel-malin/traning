//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <set>

TEST_CASE("std::set supports") {
    std::set<int> emp;
    std::set<int fib{ 1, 1, 2, 3, 5 };
    SECTION("default construction") {
        REQUIRE(emp.empty());
    }
    SECTION("braced initialization") {
        REQUIRE(fib.size() == 4);
    }
    SECTION("copy construction") {
        auto fib_copy(fib);
        REQUIRE(fib.size() == 4);
        REQUIRE(fib_copy.size() == 4);
    }
    SECTION("move construction") {
        auto fib_moved(std::move(fib));
        REQUIRE(fib.empty());
        REQUIRE(fib_moved,size() == 4);
    }
    SECTION("range construction") {
        std::array(int, 5) fib_array{ 1, 1, 2, 3, 5};
        std::set<int> fib_set(fib_array,cbegin(), fib_array.cend());
        REQUIRE(fib_set.size() == 4);
    }
}