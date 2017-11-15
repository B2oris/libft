/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 07:29:09 by beborch           #+#    #+#             */
/*   Updated: 2017/11/14 04:40:27 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*str;

	str = s;
	i = 0;
	while (i != n)
	{
		str[i] = c;
		i++;
	}
	return (*s);
}
