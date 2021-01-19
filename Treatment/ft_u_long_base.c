/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_long_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:20:39 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/20 00:20:41 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_string_len(unsigned long u_long, int base)
{
	int		string_len;

	string_len = 0;
	while (u_long)
	{
		string_len++;
		u_long /= base;
	}
	return (string_len);
}

char		*ft_u_long_base(unsigned long u_long, int base)
{
	char	*str;
	int		string_len;

	if (u_long == 0)
	{
		if (!(str = ft_strdup("0")))
			return (0);
		else
			return (str);
	}
	string_len = ft_string_len(u_long, base);
	if (!(str = (char*)malloc(sizeof(char) * (string_len + 1))))
		return (0);
	str[string_len] = '\0';
	while (u_long)
	{
		if ((u_long % base < 10))
			str[string_len - 1] = (u_long % base) + 48;
		else
			str[string_len - 1] = (u_long % base) + 87;
		u_long /= base;
		string_len--;
	}
	return (str);
}
