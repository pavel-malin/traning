#include <stdio.h>

int main() {
    int c, i, nwhile, nother;
    char ndigit[10];
     

    nwhile = nother = 0;

    for (i = 0; i < 10; ++i) 
        ndigit[i] = 0;
    
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z' && c >= 'a' && c <= 'z') 
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhile;
        else
            ++nother;
    }  
    printf(", white space = %d, other = %d\n", nwhile, nother);
}