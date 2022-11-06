#include "libft.h"
static int	ft_strcount(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static int	ft_strlen_sep(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	*ft_print_word(char const *str, char c)
{
	int		i;
	int		lenstr;
	char	*array;

	i = 0;
	lenstr = ft_strlen_sep(str, c);
	array = (char *)malloc((lenstr + 1) * sizeof(char));
	ft_strlcpy(array, str, lenstr + 1);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;
	int		count;

	i = 0;
	j = 0;
	count = ft_strcount(s, c);
	array = (char **)malloc((count + 1) * sizeof(char *));
	while (s[i] && j < count)
	{
		while (s[i] && str[i] == c)
			i++;
		if (s[i])
		{
			array[j] = ft_print_word((s + i), c);
			j++;
		}
		while (s[i] && str[i] != c)
			i++;
	}
	array[j] = 0;
	return (array);
}
/*#include<stdio.h>
int	main(void)
{
	char	**strs;
	char	*res1;
	char	sep;
	int		j;
	j = 0;
	sep = 'a';
	res1 = "f111d11a2232222b22222aaa1222aaa";
	strs = ft_split(res1,sep);
	while (strs[j])
	{
		printf("%s\n", strs[j]);
		j++;
	}
	return(0);
}*/
