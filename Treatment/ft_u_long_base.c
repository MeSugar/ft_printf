#include "../Include/ft_printf.h"

static int ft_string_len(unsigned long u_long, int base)
{
    int string_len;

    string_len = 0;
    while (u_long /= base)
        string_len++;
    return (string_len);
}

char *ft_u_long_base(unsigned long u_long, int base)
{
    char *str;
    int string_len;

    string_len = ft_string_len(u_long, base);
    str = malloc(sizeof(char) * string_len + 1);
    str[string_len] = '\0';
    while (u_long /= base)
    {
        if (u_long / base > 10)
            str[string_len - 1] = u_long / base + 87;
        else
            str[string_len - 1] = u_long / base + 48;
        string_len--;
    }
    return (str);
}