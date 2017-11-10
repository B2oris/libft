void    ft_putstr(char *str);

void    ft_memset(void *s,int c, int n)
{
    int i;
    long long *str;

    i = 0;
    *str = *s;
    while (i < n)
    {
        str[i] = c;
        i++;
    }
    return (*str);
}

#include <string.h>

int     main(void)
{
    char data[5];
    ft_memset(data,'a',5);
    ft_memset(data,'A',2);
    ft_putstr(data);
    ft_putstr("\n");
    return (0);
}