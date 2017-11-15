/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 06:30:11 by beborch           #+#    #+#             */
/*   Updated: 2017/11/14 04:39:01 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//int ft_memset(void *s, int c, size_t n);

void ft_printfcharetoile(char *p)
{
    ft_putchar(*p);
    *p = 'l';
}

int		main(void)
{
	//char *c;
	
	//printf("ft : %d",ft_isprint(c));
	//printf("\n");
	//printf("original : %d",memset(*c, 2, 'a'));
	//printf("\n");
	//return(0);

   // char str[] = "salut";
    //ft_memset(str,'0', 1);
    //puts (str);
   
    //ft_bzero(str, 3);
    //puts (str);
/* 
    char str[] = "abcde";
    char txt[] = "12345";
    ft_strcpy(str,txt);
    ft_putstr(str);
    printf("\n");
    ft_putstr(txt);*/

    //ft_putstr(ft_strnstr("manger des patates","patates", 5));
    //ft_putchar('\n');
    
    /*char *s1;
    char *s2;
    char *popo = strdup("manger des patates");
    char *papa = strdup("man");
    int taille = 10;
    if ((s1 = strnstr(popo, papa, taille)) != NULL)
        ft_putendl(s1);
    else
        ft_putendl("NULL");

     if ((s2 = ft_strnstr(popo,papa , taille)) != NULL)
        ft_putendl(s2);
    else
        ft_putendl("NULL");
    */
    /*
    printf("%d \n", ft_isalpha('\n'));
    printf("%d \n", isalpha('\n'));
    char *bboch = strdup("bonjour comment vas tu");
    ft_striter(bboch, &ft_printfcharetoile);
    ft_putchar('\n');
    ft_putendl(bboch);
    */

    
    char *s = ft_strdup("je suis cacher");
    ft_putstr(s);
    ft_putchar('\n');
    ft_strclr(s);
    ft_putstr(s);

    return(0);
}
