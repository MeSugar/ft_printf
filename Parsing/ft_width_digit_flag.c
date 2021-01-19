/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_digit_flag.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:31:20 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/19 23:31:53 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_width_digit_flag(const char *format, t_flags flags)
{
	if (flags.asterisk == 1)
		flags.width = 0;
	flags.width = flags.width * 10 + (*format - '0');
	return (flags);
}
