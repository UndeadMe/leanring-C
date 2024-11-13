// https://www.geeksforgeeks.org/fgets-gets-c-language/
#include <stdio.h>

#define MAX 15

int main() {
    char buf[MAX];
    
    fgets(buf, MAX, stdin);
    printf("string is: %s\n", buf);

    gets(buf);
    printf("string is: %s\n", buf);

    return 0;
}