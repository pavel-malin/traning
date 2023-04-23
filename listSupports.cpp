//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <list>

TEST_CASE("std::list supports front insertion") {
    std::list<int> odds{ 11, 22, 33, 44, 55 };
    odds.remove_if([](int x) { return x % 3 == 0; });
    auto odds_iter = odds.begin();
    REQUIRE(*odds_iter == 11);
    ++odds_iter;
    REQUIRE(*odds_iter == 33);
    ++odds_iter;
    REQUIRE(*odds_iter == 55);
    ++odds_iter;
    REQUIRE(odds_iter == odds.end());
}
