#include "../Include/ft_printf.h"

int ft_char_treatment(t_flags flags, va_list ap)
{
    int len;

    len = 0;
    if (flags.minus != 1)
        len += ft_fill_width(flags.width, 1, 0);
    len += ft_putchar(va_arg(ap, int));
    if (flags.minus == 1)
        len += ft_fill_width(flags.width, 1, 0);
    return (len);
}