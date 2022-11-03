#include<stdlib.h>
void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*((unsigned char *)s++) = c;
	return (s);
}
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	name[] = "fabio valli vieira";
	char	name1[] = "fabio valli vieira";
	ft_memset(name, 1150, 5);
//	memset(name1, 1150, 5);
	printf("%s\n",name);
	printf("%s\n",(unsigned char*)ft_memset(name1, 1150, 5));
	return (0);
}
