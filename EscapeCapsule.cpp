//
// Created by haskroms on 22.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <any>

struct EscapeCapsule {
    EscapeCapsule(int x) : weight_kg{ x } { }
    int weight_kg;
};

TEST_CASE("std::any allows us to std::any_cst into a type") {
    std::any hagunemnon;
    hagunemnon.emplace<EscapeCapsule>(600);
    auto capsule = std::any_cast<EscapeCapsule>(hagunemnon);
    REQUIRE(capsule.weight_kg == 600);
    REQUIRE_TROWS_AS(std::any_cast<float>(hagunemnon), std::bad_any_cast);
}