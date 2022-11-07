#include "libft.h"
int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
/*#include<stdio.h>
int	main(void)
{
	t_list	*temp;
	t_list	*head;
	t_list	*new1;
	t_list	*new2;
	t_list	*newdata;
	int	num0 = 1;
	int	num1 = 10;
	int	num2 = 0;
	int	numdata = 30;

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
	return (0);
}*/
