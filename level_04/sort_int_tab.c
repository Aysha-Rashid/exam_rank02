
// void    sort_int_tab(int *tab, unsigned int size)
// {
// 	int temp = 0;
// 	unsigned int i = 0;

// 	while (i < (size - 1))
// 	{
// 		if (tab[i] > tab[i + 1])
// 		{
// 			temp = tab[i];
// 			tab[i] = tab[i + 1];
// 			tab[i + 1] = temp;
// 			i = 0;
// 		}
// 		else
// 			i++;
// 	}
// }

void	sort_int_tab(int *tab, unsigned int size)
{
	int temp = 0;
	unsigned int i = 0;

	while(i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}


#include<stdio.h>

int main()
{
    int i;
    int tab[4] = {12, 15, 11, 10};

    sort_int_tab(tab, 4);
    for (i = 0; i < 4; i++)
    {
        printf("%d \n", tab[i]);
    }
    return 0;
}