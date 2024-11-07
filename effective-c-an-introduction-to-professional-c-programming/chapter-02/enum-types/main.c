#include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM,
    HIGH,
};

int main() {
    enum Level myVar = MEDIUM;
    
    printf("%d", myVar);

    return 0;
}