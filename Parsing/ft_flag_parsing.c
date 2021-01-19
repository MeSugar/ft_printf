/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:09:07 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/19 23:24:29 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const char	*ft_string_check(const char *format)
{
	if (!(*format))
		format--;
	if (!(ft_type_check(format)))
		format = NULL;
	return (format);
}

const char			*ft_flag_parsing(const char *format, t_flags *flags,
					va_list ap, int *i)
{
	while (*format)
	{
		if ((!(*format >= '0' && *format <= '9')) && !ft_type_check(format)
		&& !ft_flags_check(format))
			break ;
		if (*format == '0' && flags->width == 0 && flags->minus == 0)
			flags->zero = 1;
		if (*format == '.')
			format = ft_precision_flag(++format, flags, ap);
		if (*format == '-')
			*flags = ft_minus_flag(*flags);
		if (*format == '*')
			*flags = ft_width_asterisk_flag(*flags, ap);
		if ((*format >= '0' && *format <= '9'))
			*flags = ft_width_digit_flag(format, *flags);
		if (ft_type_check(format))
		{
			flags->type = *format;
			break ;
		}
		format++;
	}
	format = ft_string_check(format);
	return (format);
}
