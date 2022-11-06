static int	ft_isspace(const char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign*=-1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	i = 0;
	sign = ft_isspace(nptr, &i);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (sign*res);

}
/*#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("%d\n", ft_atoi("   +1234ab567"));
    printf("%d\n", ft_atoi("    -12a34ab567"));
    printf("%d\n", ft_atoi("   2147493648"));
	printf("%d\n", atoi("   +1234ab567"));
    printf("%d\n", atoi("    -12a34ab567"));
    printf("%d\n", atoi("   2147493648"));
    return(1);
}*/
