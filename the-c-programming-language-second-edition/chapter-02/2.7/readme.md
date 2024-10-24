## Type Conversions
When an operator has operands of different types, they are converted to a automatic conversions are those that convert a `narrower` operand into a `wider` one without lossing information, such as converting an integer floating point in an expression like f + i.
- its not illegall to assign a wider operands to narrower ones.
a `char` is just a smal integer:
> the `char` type typically occupies 1 byte (8 bites) of memory, which allows it to represent 256 different values (from -128 to 127 for `signed char`, or 0 to 255 for `unsigned char`). characters are represented using numeric values according to [`encoding standards`](../../research/character-encoding/readme.md), such as `ASCII`. In C, a `char` can be treated as an integer for operations. you can perform arithmetic operations on `char` values, and they can be used in expressions where integers are expected. the choise to represent characters as small integers datas back to early computing when memory was limited. using a signle byte to represent characters was efficient. Because of its size and behavior, char can effectively be seen as a small integer, allowing for both character manipulation and numerical operations. This dual nature is one of the features that makes C a powerful and flexible programming language.
one is exemplified by this naive implementation of the function [`atoi`](../../research/atoi/readme.md), which converts a string of digits into its numberic equivalnt.
```C
// atoi: convert s to integer
int atoi(char s[]) {
    int i, n;
    
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');

    return n;
}
```
as we discussed in chapter-01, the expression `s[i] - '0'` gives the numberic value of the character stored in `s[i]`, because the values `'0'`, `'1'`, etc., form a contiguous increasing sequence.
another example `char` to `int` conversion is the function `lower`, which maps a signle character to lower case for the ASCII character set.if the character is not a upper case letter, `lower` returns it unchanged.
```C
// lower: convert c to lower case; ASCII only
int lower(int c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else 
        return c;
}
```
the standard header `<ctype.h>`, described in Appendix B, defines a family of functions that provide tests and conversions thatt are independent of character set. for exmaple, the function `tolower` is a portable replacement for the function `lower` shown above similarly the test
```C
c >= '0' && c <= '9'
```
can be replaced by
```C
isdigit(c)
```