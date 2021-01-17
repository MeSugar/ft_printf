#include "ft_printf.h"

const char *ft_precision_flag(const char *format, t_flags *flags, va_list ap)
{
    if (*format == '*')
    {
        flags->precision = va_arg(ap, int);
        format++;
    }
    else
    {
        flags->precision = 0;
        while (*format && (*format >= '0' && *format <= '9'))
        {
            flags->precision = flags->precision * 10 + (*format - '0');
            format++;
        }
    }
    return (format);
}