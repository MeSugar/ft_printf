/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:25:49 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/20 00:25:50 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fill_width(int width, int string_width, int flag_zero)
{
	int	len;

	len = 0;
	while (width - string_width > 0)
	{
		if (flag_zero)
			len += ft_putchar('0');
		else
			len += ft_putchar(' ');
		width--;
	}
	return (len);
}
