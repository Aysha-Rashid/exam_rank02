
#include<stdlib.h>

int	*ft_range(int start, int end)
{
	int *arr;
	int i = 0;
	int count = abs(start - end); //represent the number of the elements in the array which should be the absolute difference.
	arr = malloc(sizeof(int) * (count + 1));
	if (!arr)
		return (NULL);
	if (start <= end)
	{
		while (start <= end)
		{
			arr[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			arr[i] = start;
			start--;
			i++;
		}
	}
	return(arr);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	int start = 7;
// 	int end = -3;
// 	int *result = ft_range(start, end);

// 	if (result)
// 	{
// 		for (int i = 0; i <= abs(start - end); i++)
// 		{
// 			printf("%d ", result[i]);
// 		}
// 		free(result);
// 	}
// 	return 0;
// }