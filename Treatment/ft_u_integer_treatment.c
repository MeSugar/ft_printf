#include "../Include/ft_printf.h"
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


int ft_u_integer_treatment(t_flags flags, va_list ap)
{
    int len;
    unsigned int nbr;
    char *str;
    int string_len;

    len = 0;
    nbr = (unsigned int)(va_arg(ap, unsigned int) + 4294967295 + 1);
    if (nbr == 0 && flags.precision == 0)
        return (len+= ft_fill_width(flags.width, 0, 0));
    if (!(str = ft_itoa_base((unsigned long)nbr, 10)))
        return (0);
    string_len = ft_strlen(str);
    if (flags.minus == 1)
        len += ft_fill_u_integer(str, flags, string_len);
    if (flags.precision > 0 && flags.precision > string_len)
        len += ft_fill_width(flags.width, flags.precision, 0);
    else if (flags.precision > 0)
        len += ft_fill_width(flags.width, string_len, 0);
    else if (flags.precision == 0)
        len += ft_fill_width(flags.width, 1, 0);
    else
        len += ft_fill_width(flags.width, string_len, flags.zero);
    if (flags.minus == 0)
        len += ft_fill_u_integer(str, flags, string_len);
    free(str);
    return (len);
}