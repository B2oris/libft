/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:08:12 by beborch           #+#    #+#             */
/*   Updated: 2017/11/13 02:04:11 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	/*	int			i;
		long long int	nbr;
		int			negative;

		i = 0;
		nbr = 0;
		while (nptr[i] < 33 || nptr[i] == 127)
		i++;
		negative = (nptr[i] == '-') ? 1 : 0;
		(nptr[i] == '+' || negative ? i++ : 0);
		while (nptr[i] && (nptr[i] >= '0') && (nptr[i] <= '9'))
		{
		nbr = nbr * 10;
		nbr = nbr + nptr[i] - '0';
		i++;
		}
		return (negative ? -nbr : nbr);
		*/


	int i;
	int is_neg;
	int number;

	i = 0;
	is_neg			= 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		is_neg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (is_neg)
		return (-number);
	else
		return (number);
		
}
