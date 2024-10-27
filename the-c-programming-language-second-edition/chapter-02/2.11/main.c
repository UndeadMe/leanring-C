#include <stdio.h>

int main() {
    int a, b;
    a = 0;
    b = 2;

    int x = (a > b) ? a : b; // conditional expression
    
    printf("%d\n", x);

    return 0;
}