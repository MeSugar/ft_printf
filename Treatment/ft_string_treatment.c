#include "../Include/ft_printf.h"

static int  ft_fill_string(char *str, t_flags flags, int string_len)
{
	int len;

	len = 0;
	if (flags.precision >= 0)
	{
		len += ft_fill_width(flags.width, string_len, 0);
		len += ft_putnstr(str, flags.precision);
	}
	else
		len += ft_putnstr(str, string_len);
	return (len);
}

int ft_string_treatment(t_flags flags, va_list ap)
{
    int len;
    char *str;
    int string_len;

    len = 0;
    if (!(str = va_arg(ap, char*)))
        str = "(null)";
    string_len = ft_strlen(str);

    if (flags.precision >= 0 && flags.precision > string_len)
        flags.precision = len;
    if (flags.minus == 1)
        len += ft_fill_string(str, flags, string_len);
    if (flags.precision >= 0)
        len += ft_fill_width(flags.width, flags.precision, 0);
    else
        len += ft_fill_width(flags.width, string_len, 0);
    if (flags.minus == 0)
        len += ft_fill_string(str, flags, string_len);
    return (len);
}