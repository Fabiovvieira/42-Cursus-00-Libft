#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sizedest;
	size_t	sizesrc;

	sizedest = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	i = 0;
	if (size == 0 || size <= sizedest)
		return (size + sizesrc);
	while (src[i] != '\0' && i < (size - sizedest - 1))
	{
		dst[sizedest + i] = src[i];
		i++;
	}
	dst[sizedest + i] = '\0';
	return (sizedest + sizesrc);
}
/*#include<stdio.h>
int main(void)
{
    char leftStr[20] = "123456789";
    unsigned int n=25;
    char rightStr[] = "12345";
    unsigned int n1;

    n1 = ft_strlcat(leftStr, rightStr,n);
    printf("%d\n" , n1);
    printf("%s\n" , leftStr);


    return 0;
}*/