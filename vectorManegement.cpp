//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <cstdint>
#include <array>

TEST_CASE("std::vector exposes size management methods") {
    std::vector<std::array<uint8_t, 1024>> kb_store;
    REQUIRE(kb_store.max_size() > 0);
    REQUIRE(kb_store.empty());

    size_t elements{ 1024 };
    kb_store.reserve(elements);
    REQUIRE(kb_store.empty());
    REQUIRE(kb_store.capacity() == elements);

    kb_store.emplace_back();
    kb_store.emplace_back();
    kb_store.emplace_back();
    REQUIRE(kb_store.size() == 3);

    kb_store.shrink_to_fit();
    REQUIRE(kb_store.capacity() >= 3);

    kb_store.clear();
    REQUIRE(kb_store.empty());
    REQUIRE(kb_store.capacity() >= 3);
}