#include <stdio.h>

/* A program to list a table of temperature
from Fahrenheit to Celsius {20, 40, ..., 300}*/
main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    
    printf("Fahr Celsius\n"); 
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %7.1f\n", fahr, celsius);
        fahr = fahr + 20;
    }
}