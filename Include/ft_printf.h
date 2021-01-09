#ifndef FT_PRINTF_HEADER_H
# define FT_PRINTF_HEADER_H
# include <stdarg.h>
# include "../Libft/libft.h"

typedef struct	s_flags
{
    int			type;
    int			minus;
    int			zero;
    int			width;
    int			precision;
    int			asterisk;
}				t_flags;

int ft_printf(const char *format, ...);
const char    *ft_flag_parsing(const char *format, t_flags *flags, va_list ap);
const char    *ft_precision_flag(const char *format, t_flags *flags, va_list ap);
t_flags ft_minus_flag(t_flags flags);
t_flags ft_width_asterisk_flag(t_flags flags, va_list ap);
t_flags ft_width_digit_flag(const char *format, t_flags flags);
int     ft_type_check(const char *format);
int ft_variable_treatment(int format, t_flags flags, va_list ap);
int ft_char_treatment(t_flags flags, va_list ap);
int ft_string_treatment(t_flags flags, va_list ap);



#endif