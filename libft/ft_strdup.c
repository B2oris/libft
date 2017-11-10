/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 07:29:43 by beborch           #+#    #+#             */
/*   Updated: 2017/11/10 07:29:46 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    int j;
    int *str;

    i = 0;
    j = 0;
    while (src[i] != '\0')
        i++;
    if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
        return (NULL);
    while (j < i)
    {
        str[j] = src[j];
        j++;
    }
    str[j] = '\0';
    return (str);
}
