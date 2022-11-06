#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		size1;
	int		size2;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	res = (char *)malloc((size1 + size2 + 1)* sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, s1, size1 + 1);
	ft_strlcpy(res + size1, s2, size2 + 1);
	return (res);
}
/*#include<stdio.h>
int	main(void)
{
	char const	*str1 = "fabio";
	char const	*str2 = " valli";
	char	*res;
	res = ft_strjoin(str1, str2);
	printf("the string is :%s \nthe length is :%zu\n", res, ft_strlen(res));
	free(res);
	return(0);
}*/
