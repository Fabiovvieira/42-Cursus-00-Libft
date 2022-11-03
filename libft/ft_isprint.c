int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (16384);
	else
		return (0);
}
#include<stdio.h>
#include<ctype.h>
int	main(void)
{
	printf("%d\n",ft_isprint('9'));
	printf("%d\n",isprint('9'));
	printf("%d\n",ft_isprint('a'));
	printf("%d\n",isprint('a'));
	printf("%d\n",ft_isprint('\n'));
	printf("%d\n",isprint('\n'));
	return (0);
}
