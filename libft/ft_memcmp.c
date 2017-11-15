/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 05:04:43 by beborch           #+#    #+#             */
/*   Updated: 2017/11/13 23:45:32 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *src1;
	const char *src2;
	unsigned int i;

	src1 = s1;
	src2 = s2;
	i = 0;
	while (src1[i] != '\0' && src2[i] == src1[i] && i != n)
	{
		i++;
	}
	return (src1[i] - src2[i]);
}
