//
// Created by haskroms on 22.04.23.
//
#include <boost/date_time/gregorian/gregorian.hpp>

boost::gregorian::date d{1986, 9, 15};

auto d1 = boost::gregorian::from_string("1986/9/15");