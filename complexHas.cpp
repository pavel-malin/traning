//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <complex>

TEST_CASE("std::complex has a real and imaginary component") {
    std::complex<double> a{ 0.5, 14.13 };
    REQUIRE(std::real(a) == Apporx(0.5));
    REQUIRE(std::imag(a) == Apporx(14.13));
}