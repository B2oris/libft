/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 03:18:43 by beborch           #+#    #+#             */
/*   Updated: 2017/11/28 06:58:02 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = ft_strdup((char *)s);
	if (str == NULL || f == NULL)
		return (NULL);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
