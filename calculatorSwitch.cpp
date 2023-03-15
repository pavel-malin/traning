#include <cstdio>
#include <iostream>

using namespace std;

enum struct Calculator {
    Plus,
    Minus,
    Division,
    Multiplication

};

int main() {

    Calculator cal;
    
    char res;
    
    cout << "add, multiply, subtract, divide?" << endl;
    cin >> res;
    
    if (res == '*') {
        cal = Calculator::Multiplication;
    }
    else if (res == '-') {
        cal = Calculator::Minus;
    }
    else if (res == '+') {
        cal = Calculator::Plus;
    }
    else if (res == '/') {
        cal = Calculator::Division;
    }
    
    int p, a, result;
    
    cout << "what are the values?" << endl;
    cin >> p;
    cin >> a;
    
    switch(cal) {
        case Calculator::Plus: {
            //p = 10;
            //a = 3;
            result = p + a;
            printf("Result: %d\n", result);
        } break;
        case Calculator::Minus: {
            //p = 30;
            //a = 2;
            result = p - a;
            printf("Result: %d\n", result);
        } break;
        case Calculator::Division: {
            //p = 15;
           // a = 5;
            result = p / a;
            printf("Result: %d\n", result);
        } break;
        case Calculator::Multiplication: {
            //p = 10;
            //a = 3;
            result = p * a;
            printf("Result: %d\n", result);
        } break;
        default: {
            printf("Error: unknown cal!!!");
        }
    }
    return 0;
}