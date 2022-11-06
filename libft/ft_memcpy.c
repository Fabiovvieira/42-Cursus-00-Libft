#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
        size_t  i;

        i = 0;
        while (n--)
        {
                ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
                i++;
        }
        return (dest);
}
/*#include<stdio.h>
#include<string.h>
int     main(void)
{
        char    src[] = "fabio vieira";
        char    dest[] = "vieira fabio";
	char    src1[] = "fabio vieira";
        char    dest1[] = "vieira fabio";
	char    src2[] = "fabiovieira";
        char    src22[] = "fabiovieira";
	ft_memcpy(dest, src, 5);
	memcpy(dest1, src1, 5);
        ft_memcpy(src2+5, src2, 5);
        memcpy(src22+5, src22, 5);
        printf("%s\n", dest);
        printf("%s\n", dest1);
	printf("%s\n", src2); //nesse caso o dado do src se altera ja q as memorias se sobrepoem
        printf("%s\n", src22);
        return (0);
}*/
