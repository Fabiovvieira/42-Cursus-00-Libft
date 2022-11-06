#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include<stdio.h>
char	ft_cap(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
int	main(void)
{
	char	*str = "f@bi0 VALLI VIEira";
	char	*res;
	printf("%s\n", ft_strmapi(str,&ft_cap));
	return (0);
}*/
