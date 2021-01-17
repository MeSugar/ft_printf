#include <stdio.h>
#include "Include/ft_printf.h"

int main()

{
    int a;
    int b;
    int c = 0;

    printf("\n\n\nINT == 0\n");
    printf("<<<TEST1>>>\n");
    a = printf("%2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST2>>>\n");
    a = printf("%02u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%02u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST3>>>\n");
    a = printf("%-2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST4>>>\n");
    a = printf("%2.2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%2.2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST5>>>\n");
    a = printf("%5.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%5.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST6>>>\n");
    a = printf("%3.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%3.6u1\n", c);
    printf("%d\n\n", b);

     printf("<<<TEST7>>>\n");
    a = printf("%-5.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-5.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST8>>>\n");
    a = printf("%-3.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-3.6u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST9>>>\n");
    a = printf("%05.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%05.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST10>>>\n");
    a = printf("%03.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%03.6u1\n", c);
    printf("%d\n\n", b);

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    
    c = 245;

    printf("\n\n\nINT == 245\n");
    printf("<<<TEST1>>>\n");
    a = printf("%2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST2>>>\n");
    a = printf("%02u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%02u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST3>>>\n");
    a = printf("%-2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST4>>>\n");
    a = printf("%2.2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%2.2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST5>>>\n");
    a = printf("%5.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%5.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST6>>>\n");
    a = printf("%3.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%3.6u1\n", c);
    printf("%d\n\n", b);

     printf("<<<TEST7>>>\n");
    a = printf("%-5.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-5.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST8>>>\n");
    a = printf("%-3.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-3.6u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST9>>>\n");
    a = printf("%05.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%05.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST10>>>\n");
    a = printf("%03.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%03.6u1\n", c);
    printf("%d\n\n", b);


    ///////////////////////////////////////////////////////////////////////////////

    c = -245;

    printf("\n\n\nINT == -245\n");
    printf("<<<TEST1>>>\n");
    a = printf("%2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST2>>>\n");
    a = printf("%02u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%02u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST3>>>\n");
    a = printf("%-2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST4>>>\n");
    a = printf("%2.2u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%2.2u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST5>>>\n");
    a = printf("%5.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%5.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST6>>>\n");
    a = printf("%3.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%3.6u1\n", c);
    printf("%d\n\n", b);

     printf("<<<TEST7>>>\n");
    a = printf("%-5.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-5.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST8>>>\n");
    a = printf("%-3.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-3.6u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST9>>>\n");
    a = printf("%05.3u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%05.3u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST10>>>\n");
    a = printf("%03.6u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%03.6u1\n", c);
    printf("%d\n\n", b);

    ////////////////////////////////////////////////////////////////////////////////////////
    
    c = -2147483648;

    printf("\n\n\nINT == MIN\n");
    printf("<<<TEST1>>>\n");
    a = printf("%15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST2>>>\n");
    a = printf("%015u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%015u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST3>>>\n");
    a = printf("%-15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST4>>>\n");
    a = printf("%15.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST5>>>\n");
    a = printf("%20.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%20.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST6>>>\n");
    a = printf("%15.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15.20u1\n", c);
    printf("%d\n\n", b);

     printf("<<<TEST7>>>\n");
    a = printf("%-20.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-20.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST8>>>\n");
    a = printf("%-15.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-15.20u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST9>>>\n");
    a = printf("%020.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%020.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST10>>>\n");
    a = printf("%015.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%015.20u1\n", c);
    printf("%d\n\n", b);

///////////////////////////////////////////////////////////////////////////////////////

    c = 2147483647;

    printf("\nINT == MAX\n");
    printf("<<<TEST1>>>\n");
    a = printf("%15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST2>>>\n");
    a = printf("%015u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%015u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST3>>>\n");
    a = printf("%-15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST4>>>\n");
    a = printf("%15.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST5>>>\n");
    a = printf("%20.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%20.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST6>>>\n");
    a = printf("%15.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15.20u1\n", c);
    printf("%d\n\n", b);

     printf("<<<TEST7>>>\n");
    a = printf("%-20.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-20.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST8>>>\n");
    a = printf("%-15.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-15.20u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST9>>>\n");
    a = printf("%020.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%020.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST10>>>\n");
    a = printf("%015.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%015.20u1\n", c);
    printf("%d\n\n", b);

   /////////////////////////////////////////////////////////////

    c = -2147483641;

    printf("\nINT == -2147483641\n");
    printf("<<<TEST1>>>\n");
    a = printf("%15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST2>>>\n");
    a = printf("%015u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%015u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST3>>>\n");
    a = printf("%-15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST4>>>\n");
    a = printf("%15.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST5>>>\n");
    a = printf("%20.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%20.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST6>>>\n");
    a = printf("%15.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%15.20u1\n", c);
    printf("%d\n\n", b);

     printf("<<<TEST7>>>\n");
    a = printf("%-20.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-20.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST8>>>\n");
    a = printf("%-15.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%-15.20u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST9>>>\n");
    a = printf("%020.15u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%020.15u1\n", c);
    printf("%d\n\n", b);

    printf("<<<TEST10>>>\n");
    a = printf("%015.20u1\n", c);
    printf("%d\n\n", a);

    b = ft_printf("%015.20u1\n", c);
    printf("%d\n\n", b);

    return (0);
}
