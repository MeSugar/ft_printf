#include "../Include/ft_printf.h"

t_flags ft_minus_flag(t_flags flags)
{
    flags.minus = 1;
    flags.zero = 0;
    return (flags);
}