#include "ft_printf.h"

t_flags ft_width_digit_flag(const char *format, t_flags flags)
{
    if (flags.asterisk == 1)
        flags.width = 0;
    // while (*format && (*format >= '0' && *format <= '9'))
    // {
        flags.width = flags.width * 10 + (*format - '0');
        // format++;
    // }
    return (flags);
}