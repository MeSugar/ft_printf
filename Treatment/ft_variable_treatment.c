#include "../Include/ft_printf.h"

int ft_variable_treatment(int format, t_flags flags, va_list ap)
{
    int len;

    len = 0;
    if (format == 'c')
        len += ft_char_treatment(flags, ap);
    if (format == 's')
        len += ft_string_treatment(flags, ap);
    return (len);
}