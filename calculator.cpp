#include <cstdio>


struct Calculator {
    int result;
    Calculator(char p, int x, int y) {
        //int plus(int x, int y) {
        //char p = '+';
        char res = '+';
        if (res == p) {
            result = x + y;
            printf("Result: %d\n", result);
        }        
    } 
    
    Calculator(char p, int x, int y) {
        char res = '-';
        if (res == p) {
            result = x - y;
            printf("Result: %d\n", result);
        }
        
    }
    Calculator(char p, int x, int y) {
        char res = '*';
        if (res == p) {
            result = x * y;
            printf("Result: %d\n", result);
        }
    }
    Calculator(char p, int x, int y) {
        char res = '/';
        if (res == p) {
            result = x / y;
            printf("Result: %d\n", result);
        }
        
    }
};


int main() {
    Calculator c('+', 1, 6);
    Calculator c1('-', 2, 4);
    Calculator c3('*', 5, 20);
    Calculator c2('/', 2, 100);
    return 0;
}
/*
    if (Calculator.plus == res) {
        Calculator(p, a);
    }
    else if (Calculator.minus == res) {
        Calculator(p, a);
    }
    else if (Calculator.multiply == res) {
        Calculator(p, a);
    }
    else if (Calculator.division == res) {
        Calculator(p, a);
    }
*/


