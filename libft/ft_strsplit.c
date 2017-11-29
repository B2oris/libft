/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 02:37:29 by beborch           #+#    #+#             */
/*   Updated: 2017/11/28 09:07:15 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**l_malloc(char **tab, char *str, char c)
{
	int i;
	int k;
	int letter;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		letter = 0;
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			letter++;
			i++;
		}
		if (!(tab[k] = (char *)malloc(sizeof(char *) * (letter + 1))))
			return (NULL);
		k++;
	}
	tab[k] = NULL;
	return (tab);
}

static char		**f_malloc(char *str, char c)
{
	int		i;
	int		k;
	int		word;
	char	**tab;

	i = 0;
	k = 0;
	word = 0;
	tab = NULL;
	while (str[i] != '\0')
	{
		if (str[i] != c && k == 0)
		{
			word++;
			k = 1;
		}
		if (str[i] == c)
			k = 0;
		i++;
	}
	if (!(tab = (char**)malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	return (l_malloc(tab, str, c));
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!(str = ft_strtrim((char *)s)))
		return (NULL);
	if (!(tab = f_malloc(str, c)) || !str)
		return (NULL);
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i] != c && str[i] != '\0')
			tab[j][k++] = str[i++];
		tab[j++][k] = '\0';
	}
	tab[--j] = NULL;
	return (tab);
}
