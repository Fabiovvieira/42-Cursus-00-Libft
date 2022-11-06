#include "libft.h"
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);

}
/*#include<stdio.h>
#include<string.h>
int	main(void)
{
	printf("%zu\n", ft_strlen("fabio"));
	printf("%zu\n", strlen("fabio"));
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", strlen(""));
	return (0);
}*/
