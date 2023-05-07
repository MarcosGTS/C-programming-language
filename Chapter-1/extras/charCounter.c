#include <stdio.h>

/* A program to count characters */
main() {
    double nc;

    // To use EOF in Linux terminal (Ctrl + d)
    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("%.0f\n", nc);
}