#include <cstdio>
#include <cstdint>

template <typename Fn, typename T>

void transform(Fn fn, const T* in, T* out, size_t len) {
    for(size_t i{}; i<len; i++) {
        out[i] = fn(in[i]);
    }
}

int main() {
    constexpr size_t len{ 3 };
    int base_int[]{ 1, 2, 3 }, a[len];
    float base_float[]{ 10.f, 20.f, 30.f }, b[len];
    auto translate = [](auto x) { return 10 * x + 5; };
    transform(translate, base_int, a, len);
    transform(translate, base_float, b, len);

    for(size_t i{}; i < len; i++) {
        printf("Element %zu: %d %f\n", i, a[i], b[i]);
    }
}