#include "../Include/ft_printf.h"

int ft_string_treatment(t_flags flags, va_list ap)
{
    int len;
    char *str;

    len = 0;
    str = va_arg(ap, char*);
    if (flags.minus != 1)
    {
        while ((flags.width - ft_strlen(str)) > 0)
        {
            len += ft_putchar(' ');
            flags.width--;
        }
        len += ft_putstr(str);
    }
    else
    {
        len += ft_putstr(str);
        while ((flags.width - ft_strlen(str)) > 0)
        {
          len += ft_putchar(' ');
          flags.width--;
        }
    }
    return (len);
}