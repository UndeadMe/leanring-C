#include <stdio.h>

int power(int base, int n) {
    int b = 1;

    for (int i = 1; i <= n; ++i) 
        b = b * base;

    return b;
}

int main() {
    int c;

    printf("Enter a number: ");
    while ((c = getchar()) != EOF)
        printf("%d\n", power(c, c));

    return 0;
}