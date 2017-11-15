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

int		ft_atoi(const char *nptr)
{
	int i;
	int nbr;
	int negative;

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
}
