#include "../Include/ft_printf.h"

int ft_char_treatment(t_flags flags, va_list ap)
{
    int len;

    len = 0;
    if (flags.minus != 1)
    {
        while ((flags.width - 1) > 0)
        {
            len += ft_putchar(' ');
            flags.width--;
        }
        len += ft_putchar(va_arg(ap, int));
    }
    else
    {
        len += ft_putchar(va_arg(ap, int));
        while ((flags.width - 1) > 0)
        {
          len += ft_putchar(' ');
          flags.width--;
        }
    }
    return (len);
}