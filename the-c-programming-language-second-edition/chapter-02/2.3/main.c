// strlen
#include <stdio.h>
#include <string.h>

/* 
    int strlen(char str[]) {
        int i = 0;
        
        while (str[i] != '\0')
            ++i;
        
        return i;
    } 
*/

// https://www.w3schools.com/c/c_enums.php
// https://www.youtube.com/watch?v=oW5UusoWEY0
enum Level {
    LOW = 0,
    MEDIUM = 1,
    HIGH = 2,
};

int main() {
    enum Level myVar = MEDIUM;
    
    char str[] = "Arash";
    int length = strlen(str);
    printf("%d\n", length);
    printf("%d\n", myVar);

    return 0;
}