#include <cstdio>
#include <memory>

using FileGuerd = std::unique_ptr<FILE, int(*)(FILE*)>;

void say_hello(FileGuerd file) {
    fprintf(file.get(), "HELLO DAVE");
}

int main() {
    auto file = fopen("HAL9000", "W");
    if (!file) return errno;
    FileGuerd file_guard{ file, fclose };

    say_hello(std::move(file_guard));
    return 0;
}