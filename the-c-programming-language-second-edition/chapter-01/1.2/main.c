/*
    Variables and Arithmetic Expressions
    - including:
        - comments
        - declartions
        - variables 
        - arithmetic expressions
        - loops
        - formatted output
*/

#include <stdio.h>

/* 
    this is a explanation of what the program does:        
        print Fahrenheit-Celsius table
            for fahr = 0, 20, ..., 300
*/

main() {
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0; // lower limit of temp table
    upper = 300; // upper limit
    step = 20; // step size
    
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}