#include <cstdio>
#include <cstdint>

int main() {
    char to_count{ 's' };
    size_t tally{};
    auto s_counter = [&tally, my_char = to_count](const char* str) {
        size_t index{}, result{};
        while (str[index]) {
            if (str[index] == my_char) result++;
            index++;
        }
        tally += result;
        return result;
    };
    printf("Tally: %zu\n", tally);
    auto sally = s_counter("Sally sells seashells by the seashore.");
    printf("Sally: %zu\n", sally);
    printf("Tally: %zu\n", tally);
    auto sailor = s_counter("Sailor went to sea to see what he could see.");
    printf("Sailor: %zu\n", sailor);
    printf("Tally: %zu\n", tally);
}