#include <stdio.h>
#include "Include/ft_printf.h"

int main()
{
    int a;
    int b;
    char c[] = "abc";
    char d[] = "opq";
    a = printf("%05s\n", c);
    printf("%d\n\n", a);
    //printf("2:%-2c\n", c);
    //printf("3: %.3c\n", c);
    //printf("4:%3c\n", c);

    b = ft_printf("%05s\n", c);
    printf("%d\n\n", b);

    return (0);
}