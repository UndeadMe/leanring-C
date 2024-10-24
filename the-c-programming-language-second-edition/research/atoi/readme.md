## atoi (string to integer)
- syntax
```C
#include <stdlib.h>

int atoi(const char *str);
```
- paramters
`str`: a Pointer to a [`null-terminated string`](../null-terminated-string/readme.md) that represents the integer value.
- example
```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *numStr = "-1234abc"
    int num = atoi(numStr);
    
    printf("the integer value is: %d\n", num); // output: -1234

    return 0;
}
```