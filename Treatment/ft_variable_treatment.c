#include "../Include/ft_printf.h"

char *ft_variable_treatment(int format, t_flags flags, va_list ap)
{
    int len;

    len = 0;
    if (format == 'c')
        ft_char_treatment(format, ap);

}