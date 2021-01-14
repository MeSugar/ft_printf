#include "../Include/ft_printf.h"

static int  ft_fill_pointer(char *str, t_flags flags, int string_len)
{
    int len;

    len = 0;
    len += ft_putnstr("0x", 2);
    if (flags.precision >= 0)
	{
		len += ft_fill_width(flags.precision, string_len, 0);
		len += ft_putnstr(str, flags.precision);
	}
	else
		len += ft_putnstr(str, string_len);
	return (len);
}

int ft_pointer_treatment(t_flags flags, va_list ap)
{
    int len;
    unsigned long u_long; 
    char *str;
    int string_len;

    len = 0;
    u_long = va_arg(ap, unsigned long);
    if (u_long == 0 && flags.precision == 0)
    {
        len += ft_putnstr("0x", 2);
        return (len += ft_fill_width(flags.width, 0, 1));
    }
    if (u_long == 0)
        *str = '0';
    else
        str = ft_u_long_base(u_long, 16);
    string_len = ft_strlen(str);
    
    

    



}