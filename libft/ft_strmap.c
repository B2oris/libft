/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 03:14:29 by beborch           #+#    #+#             */
/*   Updated: 2017/11/17 03:16:47 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	i = 0;
	str = ft_strdup((const char *)s);
	if (str == NULL || f == NULL)
		return (NULL);
	while (str[i])
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}
