#include "libft.h"
char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (i < len)
	{
		while (s1[i + j] == s2[j] && s1[i + j] != '\0' && i + j < len)
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
		j = 0;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    // Take any two strings
    char s1[] = "GeeksforGEekks";
    char s2[] = "for";
    char* p;

    // Find first occurrence of s2 in s1
    p = ft_strnstr(s1, s2, 8);

    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    } else
        printf("String not found\n");

    return (0);
}*/
