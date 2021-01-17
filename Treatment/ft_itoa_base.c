#include "../Include/ft_printf.h"

char *ft_itoa_base(long nbr, int base)
{
    if (nbr < 0)
        return (ft_u_long_base(((unsigned long)nbr * -1), base));
    else
        return (ft_u_long_base((unsigned long)nbr, base));
}