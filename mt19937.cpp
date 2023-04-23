//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFING_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <random>

TEST_CASE("mt19937_64 is pseuborandom") {
    std::mt19937_64 mt_engine{ 91586 };
    REQUIRE(mt_engine() == 834684399663175880);
    REQUIRE(mt_engine() == 2237671392849523263);
    REQUIRE(mt_engine() == 7333164488732543658);
}