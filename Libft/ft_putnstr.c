/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 02:21:24 by student           #+#    #+#             */
/*   Updated: 2020/11/22 20:29:30 by gdelta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnstr(char *s, int len)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] && i < len)
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	return (i);
}