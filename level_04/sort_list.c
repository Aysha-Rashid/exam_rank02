#include"list.h"

void ft_swap(t_list *a, t_list *b)
{
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
   int	swapped;
   t_list *new = lst;

   swapped = 1;
   	while (swapped == 1)
	{
		swapped = 0;
		while (new->next != 0 && new != 0)
		{
			if (cmp(new->data, new->next->data) == 0) // cpm is going to be zero if both of these values are not same
			// - so we are checking if the current new(data) is !same as the next(data).
			{
				ft_swap(new, new->next);
				swapped = 1;
			}
			new = new->next; // if they are same we go into the next node.
		}
		new = lst; // update the lst.
	}
	return (lst);
}

// //----------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

// int	main(void)
// {
// 	t_list *c = malloc(sizeof(t_list));
// 	c->next = 0;
// 	c->data = 45;

// 	t_list *b = malloc(sizeof(t_list));
// 	b->next = c;
// 	b->data = 73;

// 	t_list *a = malloc(sizeof(t_list));
// 	a->next = b;
// 	a->data = 108;

// 	t_list *cur = a;
// 	while (cur)
// 	{
// 		printf("%d, ", cur->data);
// 		cur = cur->next;
// 	}
// 	printf("\n");

// 	cur = sort_list(a, ascending);

// 	// cur = a;
// 	while (cur)
// 	{
// 		printf("%d, ", cur->data);
// 		cur = cur->next;
// 	}
// 	printf("\n");
// }