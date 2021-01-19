/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:58:11 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/20 00:58:12 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_flags_initialization(void)
{
	t_flags		flags;

	flags.type = 0;
	flags.minus = 0;
	flags.zero = 0;
	flags.width = 0;
	flags.precision = -1;
	flags.asterisk = 0;
	return (flags);
}

int		ft_format_treatment(const char *format, va_list ap)
{
	int			len;
	t_flags		flags;

	len = 0;
	while (*format)
	{
		flags = ft_flags_initialization();
		if (!(*format))
			break ;
		else if (*format != '%')
			len += ft_putchar(*format);
		else if (*format == '%' && *(format + 1))
		{
			if (*(format + 1) == ' ')
				len += ft_putchar(*(++format));
			if (!(format = ft_flag_parsing(++format, &flags, ap, &len)))
				return (0);
			if (ft_type_check(format))
				len += ft_variable_treatment((char)flags.type, flags, ap);
			else if (*format)
				len += ft_putchar(*format);
		}
		format++;
	}
	return (len);
}

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			len;

	len = 0;
	va_start(ap, format);
	len += ft_format_treatment(format, ap);
	va_end(ap);
	return (len);
}
