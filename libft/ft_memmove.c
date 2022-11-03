#include<stdlib.h>
#include<string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = strlen((char *)src);	
        while (n-- && len--)
                *((unsigned char *)dest++) = *((unsigned char *)src++);
        return (dest);
}
#include<stdio.h>
//#include<string.h>
int     main(void)
{
        char    src[] = "fabio vieira";
        char    dest[] = "vieira fabio";
        char    src1[] = "fabio vieira";
        char    dest1[] = "vieira fabio";
        char    src2[100] = "0123456789";
        char    src22[100] = "0123456789";
        ft_memmove(dest, src, 13);
        memmove(dest1, src1, 13);
        ft_memmove(src2+5, src2, 15);
        memmove(src22+5, src22, 15);
        printf("%s\n", dest);
        printf("%s\n", dest1);
        printf("%s\n", src2); //nesse caso o dado do src se altera ja q as memorias se sobrepoem
        printf("%s\n", src22);
        return (0);
}
