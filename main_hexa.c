#include <stdio.h>
#include "Include/ft_printf.h"

int main()

{
    int a;
    int b;
    char *c = "abc";
    // c = 0;
    a = printf("%011%1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%011%1\n", c);
    printf("%d\n\n", b);

    return (0);
}
