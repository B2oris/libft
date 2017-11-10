/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 06:30:11 by beborch           #+#    #+#             */
/*   Updated: 2017/11/10 08:05:41 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//int ft_memset(void *s, int c, size_t n);

int		main(void)
{
	char *c;
	
	//printf("ft : %d",ft_isprint(c));
	//printf("\n");
	//printf("original : %d",memset(*c, 2, 'a'));
	//printf("\n");
	//return(0);

	char str[] = "almost every programmer should know memset!";
    memset (str,'1',  1 * sizeof(str[0]));
    puts (str);
 
    /*Test avec un tableau de int
    int t[] = {145478, 1458758, 1421454, 14254585};
    memset(t, 0, 3*sizeof(t[0]));
 
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        printf("%d\n", t[i]);
    }
 */
    return(0);
}
