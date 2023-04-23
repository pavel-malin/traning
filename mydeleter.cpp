#include <cstdio>
#include <memory>

auto my_deleter = [](int* x) {
    printf("Deleting an int at %p.", x);
    delete x;
};

std::unique_ptr<int, decltype(my_deleter)> my_up{
    new int,
    my_deleter
};