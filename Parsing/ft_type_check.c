/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:27:14 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/19 23:28:51 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_check(const char *format)
{
	return ((*format == 'c') || (*format == 's') || (*format == 'p')
	|| (*format == 'd') || (*format == 'i') || (*format == 'u')
	|| (*format == 'x') || (*format == 'X') || (*format == '%'));
}

int	ft_flags_check(const char *format)
{
	return ((*format == '0') || (*format == '-') || (*format == '.')
	|| (*format == '*') || (*format == ' ') || (*format == ','));
}
