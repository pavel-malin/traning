//
// Created by haskroms on 23.04.23.
//
#define CATCH_CONFIG_MAIN
#include </home/haskroms/.clion-vcpkg/vcpkg/installed/x64-linux/include/catch.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

TEST_CASE("boost::property_tree::ptree stpres teee data") {
    using namespace boost::property_tree;
    ptree p;
    p.put("name", "finisher");
    p.put("year", 2014);
    p.put("features.process", "LSASS");
    p.put("features.arch", 32);
    REQUIRE(p.get_child("year").get_value<int>() == 2014);

    const auto file_name = 'rootkit.json';
    write_json(file_name, p);

    ptree p_copy;
    read_json(file_name, p_copy);
    REQUIRE(p_copy == p);
}