/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 04:55:42 by beborch           #+#    #+#             */
/*   Updated: 2017/11/13 23:48:39 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char		*src;
	unsigned int	i;

	i = 0;
	src = (unsigned char *)s;
	while ( i != n)
	{
		if (src[i] == c)
			return (src);
		i++;
	}
	return (NULL);
}
