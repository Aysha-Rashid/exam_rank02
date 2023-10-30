#include <stdlib.h>

int	*ft_rrange(int	start,int	end)
{
	int *ptr;
	int i = 0;
	int total = abs(start - end);
	ptr = malloc(sizeof(int)*(total + 1));

	if (start >= end)
	{
		while (start >= end)
		{
			ptr[i] = end;
			end++;
			i++;
		}
	}
	else
	{
		while (start <= end)
		{
			ptr[i] = end;
			end--;
			i++;
		}
	}
	return(ptr);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	int start = 0;
// 	int end = -3;
// 	int *result = ft_rrange(start, end);

// 	if (result)
// 	{
// 		for (int i = 0; i <= abs(start - end); i++)
// 		{
// 			printf("%d ", result[i]);
// 		}
// 		free(result);
// 	}
// }