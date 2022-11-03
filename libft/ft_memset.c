#include<stdlib.h>
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	
	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = c;
	return (s);
}
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	name[] = "fabio valli vieira";
	char	name1[] = "fabio valli vieira";
	printf("%s\n",(unsigned char*)ft_memset(name, 0, 5));
	printf("%s\n",(unsigned char*)ft_memset(name1, 0, 5));
	return (0);
}
