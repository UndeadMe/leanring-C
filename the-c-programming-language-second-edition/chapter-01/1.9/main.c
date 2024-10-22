// Character Arrays
// https://www.studytonight.com/c/string-and-character-array.php
// https://www.scaler.com/topics/character-array-in-c/
// https://www.studytonight.com/c/variables-in-c.php
// https://www.studytonight.com/c/c-syntax.php
// https://www.studytonight.com/c/datatype-in-c.php
// https://www.studytonight.com/c/arrays-in-c
// https://www.geeksforgeeks.org/c-program-to-find-the-length-of-a-string/

#include <stdio.h>

int main() {
    char dummy_text[] = "HOME";
    char reverse_text[100];

    int length = 0;

    while (dummy_text[length] != '\0')
        ++length;

    for (int i = (length - 1); i >= 0; --i)
        reverse_text[length - 1 - i] = dummy_text[i];

    printf("%s", reverse_text);
}