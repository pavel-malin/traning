//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include <cmath>
#include <boost/math/constants/constants.hpp>
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>

TEST_CASE("boost::match offers constants") {
    using namespace boost::math::double_constants;
    auto sphere_volume = four_thirds_pi * std::pow(10, 3);
    REQUIRE(sphere_volume == Approx(4188.7902047));
}