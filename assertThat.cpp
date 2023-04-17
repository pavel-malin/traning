#include <stdexcept>

constexpr void assert_that(bool statement, const char* message) {
    if (!statement) throw std::runtime_error{ message };  //ERROR 
}

int main() {
    assert_that(1 + 2 > 2, "Something is profoundly wrong with the universe.");
    assert_that(24 == 42, "This assertion will generate an exception.");
}