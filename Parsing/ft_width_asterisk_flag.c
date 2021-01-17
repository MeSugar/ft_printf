#include "ft_printf.h"

t_flags ft_width_asterisk_flag(t_flags flags, va_list ap)
{
    flags.asterisk = 1;
    flags.width = va_arg(ap, int);
    if (flags.width < 0)
    {
        flags.minus = 1;
        flags.width *= -1;
        flags.zero = 0;
    }
    return (flags);
}