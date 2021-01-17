#include "ft_printf.h"

int ft_fill_width (int width, int string_width, int flag_zero)
{
    int len;

    len = 0;
    while (width - string_width > 0)
    {
        if (flag_zero)
            len += ft_putchar('0');
        else
            len += ft_putchar(' ');
        width--;
    }
    return (len);
}