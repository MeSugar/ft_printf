#include "ft_printf.h"

const char *ft_flag_parsing(const char *format, t_flags *flags, va_list ap, int *i)
{
    while(*format)
    {
        if ((!(*format >= '0' && *format <= '9')) && !ft_type_check(format) && !ft_flags_check(format))
            break;
        // if (*format == ' ' || *format == ',')
        //         *i += ft_putchar(*format);
        if (*format == '0' && flags->width == 0 && flags->minus == 0)
            flags->zero = 1;
        if (*format == '.')
            format = ft_precision_flag(++format, flags, ap);
        if (*format == '-')
            *flags = ft_minus_flag(*flags);
        if (*format == '*')
            *flags = ft_width_asterisk_flag(*flags, ap);
        if ((*format >= '0' && *format <= '9'))
            *flags = ft_width_digit_flag(format, *flags);
        if (ft_type_check(format))
        {
            flags->type = *format;
            break;
        }
        format++;
    }
    if (!(*(format)))
        format--;
    if (!(ft_type_check(format)))
        format = NULL;
    return (format);
}