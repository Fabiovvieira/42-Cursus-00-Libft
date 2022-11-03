#include<stdlib.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	
	p = s;
	while (n--)
		*(p++) = 0;
}
#include<stdio.h>
#include<string.h>
int	main(void)
{
        char    name[] = "fabio valli vieira";
        char    name1[] = "fabio valli vieira";
        ft_bzero(name, 5);
        bzero(name1, 5);
	printf("%s\n",name);
	printf("%s\n",name1);
	printf("%s\n",name+5);
	printf("%s\n",name1+5);
        return (0);	
}
