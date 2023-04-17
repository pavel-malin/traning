#include <cstdio>
#include <functional>

int main() {
    std::function<void()> func;
    try {
        func();
    } catch (const std::bad_function_call& e) {
        printf("Exeception: %s", e.what());
    }
}