#include <cstdio>
#include <cstdint>

struct LambdaFactory {
    LambdaFactory(char in) : to_count{ in }, tally{} { }
    auto make_lambda() {
        return [this](const char* str) {
            size_t index{}, result{};
            while (str[index]) {
                if (str[index] == to_count) result++;
                index++;
            }
            tally += result;
            return result;
        };
    }
    const char to_count;
    size_t tally;
};

int main() {
    LambdaFactory factory{ 's' };
    auto lambda = factory.make_lambda();
    printf("Tally: %zu\n", factory.tally);
    printf("Sallty: %zu\n", lambda("Sally sells seashells by the seashore."));
    printf("Tally: %zu\n", factory.tally);
    printf("Sailor: %zu\n", lambda("Sailor went to sea to see what he could see."));
    printf("Tally: %zu\n", factory.tally);
}