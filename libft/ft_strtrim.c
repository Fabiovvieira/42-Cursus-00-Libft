/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:36:05 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/11/07 12:36:05 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	begin_index(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!(is_set (s1[i], set)))
			break ;
		i++;
	}
	return (i);
}

static int	end_index(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (!(is_set(s1[i], set)))
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		end;
	char	*res;

	if (!(*s1))
		return (0);
	if (!(*set))
		return ((char *)s1);
	begin = begin_index(s1, set);
	end = end_index(s1, set);
	if (end < begin)
	{
		res = ft_strdup("");
		return (res);
	}
	else
		res = (char *)malloc((end - begin + 1) * sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, s1 + begin, end - begin + 2);
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Original string :%s\nSet of char:%s\nTrimmed string:%s\n",
	"          ", "\t \n", ft_strtrim("          ", "\t \n"));
}*/
