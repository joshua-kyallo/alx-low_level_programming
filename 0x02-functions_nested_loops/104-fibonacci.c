#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */

int main() {
    int a = 1, b = 2, c, count = 2;
    printf("%d, %d, ", a, b);

    while (count < 98) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
        count++;
    }

    c = a + b;
    printf("%d\n", c);

    return 0;
}
