#include "ft_list_size.h"

// #include<stdlib.h>

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}

// #include<stdio.h>
// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new_node;

// 	new_node = (t_list *)malloc(sizeof(t_list));
// 	if (!new_node)
// 		return (NULL);
// 	new_node ->data = content;
// 	new_node ->next = NULL;
// 	return (new_node);
// }
// int main ()
// {

// 	t_list *node = ft_lstnew("hello");
// 	t_list *node1 = ft_lstnew("hi");
// 	t_list *node2 = ft_lstnew("hekkk");

// 	node -> next = node1;
// 	node1 -> next = node2;
// 	node2 -> next = NULL;	
// 	printf("%d\n", ft_list_size(node));
// }