#include <stdio.h>
#include "Include/ft_printf.h"

int main()
{
    int a;
    int b;
    char c[] = "abc";
<<<<<<< HEAD
    char d[] = "opq";
    a = printf("%05s\n", c);
=======
 //   char d[] = "opq";
    a = printf("%-7.6s1\n", c);
>>>>>>> f39785fb62d31949291759f6af55e8eb1fe66dd7
    printf("%d\n\n", a);
    //printf("2:%-2c\n", c);
    //printf("3: %.3c\n", c);
    //printf("4:%3c\n", c);

<<<<<<< HEAD
    b = ft_printf("%05s\n", c);
=======
    b = ft_printf("%-7.6s1\n", c);
>>>>>>> f39785fb62d31949291759f6af55e8eb1fe66dd7
    printf("%d\n\n", b);

    return (0);
}
