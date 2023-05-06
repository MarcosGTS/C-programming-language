#include <stdio.h>

/*A program to generate a table of
Celsius to Fahrenheit from {0, 20, ..., 300}*/
main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%7s %6s\n", "Celsius", "Fahr");
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%7.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}