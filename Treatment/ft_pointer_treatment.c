/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_treatment.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 23:01:43 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/15 23:06:01 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_pointer(char *str, t_flags flags, int string_len)
{
	int len;

	len = 0;
	len += ft_putnstr("0x", 2);
	if (flags.precision >= 0)
	{
		len += ft_fill_width(flags.precision, string_len, 1);
		len += ft_putnstr(str, flags.precision);
	}
	else
		len += ft_putnstr(str, string_len);
	return (len);
}

static int	ft_print_string(t_flags flags, int string_len, char *str)
{
	int len;

	len = 0;
	if (flags.minus == 1)
		len += ft_fill_pointer(str, flags, string_len);
	if (flags.precision >= 0)
	{
		if (string_len > flags.precision)
			flags.precision = string_len;
		len += ft_fill_width(flags.width - 2, flags.precision, flags.zero);
	}
	else
		len += ft_fill_width(flags.width - 2, string_len, flags.zero);
	if (flags.minus == 0)
		len += ft_fill_pointer(str, flags, string_len);
	return (len);
}

int			ft_pointer_treatment(t_flags flags, va_list ap)
{
	int				len;
	unsigned long	u_long;
	char			*str;
	int				string_len;

	len = 0;
	u_long = (size_t)va_arg(ap, void*);
	if (u_long == 0 && flags.precision == 0)
	{
		len += ft_fill_width(flags.width - 2, 0, flags.zero);
		len += ft_putnstr("0x", 2);
		return (len);
	}
	str = ft_u_long_base(u_long, 16);
	string_len = ft_strlen(str);
	len += ft_print_string(flags, string_len, str);
	free(str);
	return (len);
}
