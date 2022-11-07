#include "libft.h"
t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*#include<stdio.h>
int	main(void)
{
	t_list	*new;
	int	num = 10;

	new = ft_lstnew(&num);
	printf("content is :%d\n", *(int *)(new->content));
	printf("next is :%p\n", new->next);
	// printf("content is :%d", ((int *)(new->content))[0]);
	return (0);
}*/
