#include <cstdio>
#include <cstdint>

int main(int argc, char** argv) {
    printf("Arguments: %d\n", argc);
    for (size_t i{}; i<argc; i++) {
        printf("%zu: %s\n", i, argv[i]);
    }
}