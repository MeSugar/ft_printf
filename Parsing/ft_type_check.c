#include "../Include/ft_printf.h"

int ft_type_check(const char *format)
{
    return ((*format == 'c') || (*format == 's') || (*format == 'p') || (*format == 'd')
    || (*format == 'i') || (*format == 'u') || (*format == 'x') || (*format == 'X') || (*format == '%'));
}