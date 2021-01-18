#include "ft_printf.h"

static	int	ft_fill_u_integer(char *str, t_flags flags, int string_len)
{
	int				len;

	len = 0;
	if (flags.precision >= 0)
	{
		len += ft_fill_width(flags.precision, string_len, 1);
		len += ft_putnstr(str, string_len);
	}
	else
		len += ft_putnstr(str, string_len);
	return (len);
}
static char *ft_str_toupper(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
    return (str);
}

int ft_hexa_treatment(t_flags flags, va_list ap, int capital)
{
    int len;
    unsigned int nbr;
    char *str;
    int string_len;

    len = 0;
    nbr = (va_arg(ap, unsigned int));
    if (nbr == 0 && flags.precision == 0)
        return (len+= ft_fill_width(flags.width, 0, 0));
    if (!(str = ft_u_long_base((unsigned long)nbr, 16)))
        return (0);
    if (capital)
        str = ft_str_toupper(str);
    string_len = ft_strlen(str);
    if (flags.minus == 1)
        len += ft_fill_u_integer(str, flags, string_len);
    if (flags.precision > 0 && flags.precision > string_len)
        len += ft_fill_width(flags.width, flags.precision, 0);
    else if (flags.precision > 0)
        len += ft_fill_width(flags.width, string_len, 0);
    else if (flags.precision == 0)
        len += ft_fill_width(flags.width, string_len, 0);
    else
        len += ft_fill_width(flags.width, string_len, flags.zero);
    if (flags.minus == 0)
        len += ft_fill_u_integer(str, flags, string_len);
    free(str);
    return (len);
}