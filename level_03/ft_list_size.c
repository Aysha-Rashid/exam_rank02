#include "ft_list_size.h"

<<<<<<< HEAD
// #include<stdlib.h>

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    while (begin_list)
=======
int ft_list_size(t_list *begin_list)
{
    int i = 0;
    while(begin_list)
>>>>>>> c868f6c060394e4fbc66d6d8b3007127a49802ef
    {
        begin_list = begin_list->next;
        i++;
    }
<<<<<<< HEAD
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
=======
    return(i);
}
>>>>>>> c868f6c060394e4fbc66d6d8b3007127a49802ef
