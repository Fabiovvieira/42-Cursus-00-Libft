/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:05:29 by fvalli-v          #+#    #+#             */
/*   Updated: 2022/11/07 16:34:56 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free (lst);
	}
}
/*static void	ft_delete(void	*data)
{
	if (data != NULL)
		free (data);
}
#include<stdio.h>
int	main(void)
{
	t_list	*temp;
	t_list	*head;
	t_list	*new1;
	t_list	*new2;
	t_list	*new3;
	t_list	*newdata;
	int	num0 = 1;
	int	num1 = 10;
	int	num2 = 0;
	int	num3 = 11;
	int	num4 = 12;
	int	num5 = 13;
	int	num66 = 14;



	int	*num6;
	num6 = (int *)malloc(sizeof(int));
	num6 = &num66;
	int	numdata = 30;

	new3 = ft_lstnew(num6);
	head = ft_lstnew(&num0);
	new1 = ft_lstnew(&num1);
	new2 = ft_lstnew(&num2);
	newdata = ft_lstnew(&numdata);
	head->next = new1;
	new1->next = new2;
	temp = head;
	//print all elements of the list
	while(temp != NULL)
	{
		printf("%d ", *(int *)(temp->content));
		temp = temp->next;
	}
	printf("\n");
	//print the size of the list
	printf("length of the list is:%d\n", ft_lstsize(head));

	// add new element in the begining of the list and update temp
	ft_lstadd_front(&head, newdata);
	ft_lstadd_front(&head, ft_lstnew(&num3));
	ft_lstadd_back(&head, ft_lstnew(&num4));
	ft_lstadd_back(&head, ft_lstnew(&num5));
	temp = head;

	//print all the elements of the new list
	while(temp != NULL)
	{
		printf("%d ", *(int *)(temp->content));
		temp = temp->next;
	}
	printf("\n");

	//print the size of the list
	printf("length of the list is:%d\n", ft_lstsize(head));

	// print the data from the last element of the list
	printf("the data from the last element is:%d \n",
	*(int *)(ft_lstlast(head)->content));

	// free a content's node from a list
	printf("the content to be freed is:%d\n", *(int *)(new3->content));
	ft_lstdelone(new3, &ft_delete); // i cant freed the memory from content
	//cause this memory is not freeable (from stack, not heap)
	// printf("the content freed is:%d", *(int *)(new3->content));
	return (0);
}*/
