/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 03:11:14 by beborch           #+#    #+#             */
/*   Updated: 2017/11/14 03:54:07 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;

	i = 0;
	while (s1[i] && i < len + 1 - ft_strlen(s2))
	{
		if (ft_strncmp(s2, &s1[i], ft_strlen(s2)) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
