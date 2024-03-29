/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer_treatment.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:27:32 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/20 00:27:33 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill_integer(char *str, t_flags flags, int string_len, int nbr)
{
	int len;

	len = 0;
	if (nbr < 0 && (flags.zero == 0 || flags.precision >= 0))
	{
		if (flags.precision >= 0 && flags.zero == 1)
			len--;
		len += ft_putnstr("-", 1);
	}
	if (flags.precision > 0)
	{
		len += ft_fill_width(flags.precision, string_len, 1);
		len += ft_putnstr(str, string_len);
	}
	else
		len += ft_putnstr(str, string_len);
	return (len);
}

static int	ft_print_string(t_flags flags, int string_len, char *str, int nbr)
{
	int len;

	len = 0;
	if (flags.minus == 1)
		len += ft_fill_integer(str, flags, string_len, nbr);
	if (flags.precision > 0 && flags.precision > string_len)
		len += ft_fill_width(flags.width, flags.precision, 0);
	else if (flags.precision >= 0)
		len += ft_fill_width(flags.width, string_len, 0);
	else
		len += ft_fill_width(flags.width, string_len, flags.zero);
	if (flags.minus == 0)
		len += ft_fill_integer(str, flags, string_len, nbr);
	return (len);
}

int			ft_integer_treatment(t_flags flags, va_list ap)
{
	int		len;
	int		nbr;
	char	*str;
	int		string_len;

	len = 0;
	nbr = va_arg(ap, int);
	if (nbr == 0 && flags.precision == 0)
		return (len += ft_fill_width(flags.width, 0, 0));
	if (!(str = ft_itoa_base(nbr, 10)))
		return (0);
	string_len = ft_strlen(str);
	if (nbr < 0 && (flags.precision < 0 || flags.zero == 1))
	{
		if (flags.precision < 0 && flags.zero == 1)
			ft_putnstr("-", 1);
		if (flags.zero == 1)
			len++;
	}
	if (nbr < 0)
		flags.width--;
	len += ft_print_string(flags, string_len, str, nbr);
	free(str);
	return (len);
}
