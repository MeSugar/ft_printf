#include <stdio.h>
#include "Include/ft_printf.h"

int main()
{
    int a;
    int b;
    char c = 'w';
    char d = 's';
    a = printf("1 o: %c\n2 o: %-5c\n", c, d);
    printf("o int: %d\n\n", a);
    //printf("2:%-2c\n", c);
    //printf("3: %.3c\n", c);
    //printf("4:%3c\n", c);

    b = ft_printf("1 m: %c\n2 m: %-5c\n", c, d);
    printf("m int: %d\n\n", b);

    return (0);
}