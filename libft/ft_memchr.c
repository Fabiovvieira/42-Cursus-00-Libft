#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while(n--)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	if (((unsigned char *)s)[i] == (unsigned char)c)
		return ((void *)(s + i));
	return (0);
}
/*#include<stdio.h>
#include <string.h>
int	main(void)
{
	char *str = "fabiovallivieira";
	int	n = 10;

	printf("%s \n", ft_memchr(str, 'v', n));
	printf("%s \n", ft_memchr(str, 'b', n));
	printf("%s \n", ft_memchr(str, 'g', n));
	printf("%s \n", ft_memchr(str, '\0', n));
	printf("%s \n", memchr(str, 'v', n));
	printf("%s \n", memchr(str, 'b', n));
	printf("%s \n", memchr(str, 'g', n));
	printf("%s \n", memchr(str, '\0', n));
	return(0);
}*/
