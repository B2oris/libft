/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 01:06:57 by beborch           #+#    #+#             */
/*   Updated: 2017/11/26 07:45:33 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int i;

	i = 0;
	if (!meule_de_foin[i] && !aiguille[i])
		return ((char*)meule_de_foin);
	while (meule_de_foin[i])
	{
		if (ft_strncmp(aiguille, &meule_de_foin[i], ft_strlen(aiguille)) == 0)
			return ((char *)&meule_de_foin[i]);
		i++;
	}
	return (NULL);
}
