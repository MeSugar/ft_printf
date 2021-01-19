/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 00:14:27 by gdelta            #+#    #+#             */
/*   Updated: 2021/01/20 00:14:28 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(long nbr, int base)
{
	if (nbr < 0)
		return (ft_u_long_base(((unsigned long)nbr * -1), base));
	else
		return (ft_u_long_base((unsigned long)nbr, base));
}
