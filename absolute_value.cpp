#include <cstdio>

int absolute_value(int x) {
    int result = 0;
    if (x >= 0) {
        result = x;
    } 
    else if (x <= 0) {
        result = -1;
    }
    return result;
}

int main() {
    int my_num = -1000;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}