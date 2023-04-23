//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <functional>


TEST_CASE("std::hash<long> returns") {
    std::hash<long> hasher;
    auto hash_code_42 = hasher(42);
    SECTION("equal hash codes for equal keys") {
        REQUIRE(hash_code_42 == hasher(42));
    }
    SECTION("unequal hash codes for unequal keys") {
        REQUIRE(hash_code_42 != hasher(43));
    }
}

TEST_CASE("std::equal_to<long> returns") {
    std::equal_to<long> long_equal_to;
    SECTION("true when arguments equal") {
        REQUIRE(long_equal_to(42, 42));
    }
    SECTION("false when arguments unequal") {
        REQUIRE_FALSE(long_equal_to(42, 43));
    }
}