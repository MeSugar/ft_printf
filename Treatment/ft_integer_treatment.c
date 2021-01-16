#include "../Include/ft_printf.h"

static	int	ft_fill_integer(char *str, t_flags flags, int string_len)
{
    
}

int ft_integer_treatment(t_flags flags, va_list ap)
{
    int len;
    int nbr;
    char *str;
    int string_len;

    len = 0;
    nbr = va_arg(ap, int);
    str = ft_itoa_base(nbr, 10);
    string_len = ft_strlen(str);
    if (nbr == 0 && flags.precision == 0)
        return (len+= ft_fill_width(flags.width, 0, 0));
    if (nbr < 0 && (flags.precision < 0 || flags.zero == 1))
    {
        if (flags.precision < 0)
            ft_putnstr("-", 1);
        flags.zero = 1;
        flags.width--;
        len++;
    }
    len += ft_fill_integer(str, flags, string_len);
    free(str);
    return (len);
}