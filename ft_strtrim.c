/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 03:58:39 by beborch           #+#    #+#             */
/*   Updated: 2017/11/29 03:41:09 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** space before
** space after
*/

static char		*l_strtrim(unsigned long space_b, unsigned long space_a, \
		char const *s)
{
	unsigned long	i;
	char			*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) - space_b - space_a + 1));
	if (str == NULL)
		return (NULL);
	if (space_b == 0 && space_a == 0)
		return (str = (char *)s);
	i = 0;
	while (i < ft_strlen(s) - space_b - space_a)
	{
		str[i] = s[space_b + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s)
{
	unsigned long	space_b;
	unsigned long	space_a;
	unsigned long	i;

	space_b = 0;
	space_a = 0;
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
	{
		space_b++;
		i++;
	}
	if (s[i] == '\0')
		return ("\0");
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		space_a++;
		i--;
	}
	return (l_strtrim(space_b, space_a, s));
}
