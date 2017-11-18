/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 03:58:39 by beborch           #+#    #+#             */
/*   Updated: 2017/11/18 04:25:20 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int len;
	int space_b;
	int space_a;
	char *tab;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return (NULL)
	while (s[i] && ft_isprint(s[i]) == 0)
	{
		
	}
}
