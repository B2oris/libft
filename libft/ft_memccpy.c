/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 02:23:23 by beborch           #+#    #+#             */
/*   Updated: 2017/11/13 04:50:17 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*dest2;
	const char		*src2;

	i = 0;
	dest2 = dest;
	src2 = src;
	while (i != n && src2[i] != c)
	{
		dest2[i] = src2[i];
		i++;
	}
	if (src2[i] == c)
		return (dest);
	else
		return (NULL);
}
