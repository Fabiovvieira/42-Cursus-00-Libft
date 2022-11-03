/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:20:01 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/11/02 16:24:25 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	else
		return (0);
}
/*#include<stdio.h>
#include<ctype.h>
int	main(void)
{
	printf("%d\n",ft_isalnum('8'));
	printf("%d\n",isalnum('8'));
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",isalnum('a'));
	printf("%d\n",ft_isalnum(8));
	printf("%d\n",isalnum(8));
}*/
