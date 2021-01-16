#include <stdio.h>
#include "Include/ft_printf.h"

int main()

{
    int a;
    // int b;
    int c = -2;

    // c = 0;
    a = printf("%-22d1\n", c);
    printf("%d\n\n", a);

    // b = ft_printf("%5.2d1\n", c);
    // printf("%d\n\n", b);

    return (0);
}
