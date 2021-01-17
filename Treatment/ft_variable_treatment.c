#include "ft_printf.h"

int ft_variable_treatment(int format, t_flags flags, va_list ap)
{
    int len;

    len = 0;
    if (format == 'c' || format == '%')
        len += ft_char_treatment(flags, ap, format);
    else if (format == 's')
        len += ft_string_treatment(flags, ap);
    else if (format == 'p')
        len += ft_pointer_treatment(flags, ap);
    else if (format == 'd' || format == 'i')
        len += ft_integer_treatment(flags, ap);
    else if (format == 'u')
        len += ft_u_integer_treatment(flags, ap);
    else if (format == 'X')
        len += ft_hexa_treatment(flags, ap, 1);
    else if (format == 'x')
        len += ft_hexa_treatment(flags, ap, 0);
    return (len);
}