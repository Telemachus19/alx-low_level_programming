#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    printf("%d\n",INT_MIN);
    print_last_digit(INT_MIN);
    printf("\n");
    printf("%d\n", -1024 % 10);
    return (0);
}
