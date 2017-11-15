/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 04:30:13 by beborch           #+#    #+#             */
/*   Updated: 2017/11/13 04:38:58 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dest2;
	const char		*src2;
	char			*tmp;

	i = 0;
	dest2 = dest;
	src2 = src;
	while (i != n)
	{
		tmp[i] = src2[i];
		i++;
	}
	i = 0;
	while (i != n)
	{
		dest2[i] = tmp[i];
	}
	return (dest);
}
