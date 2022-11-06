int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*#include<stdio.h>
int	main(void)
{
	char c = 'a';
    char c1 = 'C';
    char c2 = ' ';
    char c3 = '1';

    printf("%c \n", ft_toupper(c));
	printf("%c \n", ft_toupper(c1));
	printf("%c \n", ft_toupper(c2));
    printf("%c \n", ft_toupper(c3));

	return(0);
}*/
