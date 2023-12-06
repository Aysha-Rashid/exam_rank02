
// int	max(int	*tab, unsigned int len)
// {
// // array of int = tab
// // number of elements in the array = len
// // return the largest number in the array

//     if (len == 0)
//         return 0; // If the array is empty, return 0

//     int maxNumber = tab[0]; // Assume the first element is the largest

// 	unsigned int i = 1;
// 	while (i < len)
// 	{
// 		if (tab[i] > maxNumber)
// 			maxNumber = tab[i];
// 		i++;
// 	}
//     return maxNumber; // Return the largest number in the array
// }


// int		max(int *tab, unsigned int len)
// {
// 	unsigned int i = 0;
// 	int max_num = tab[0];
// 	while(i < len)
// 	{
// 		if(max_num < tab[i])
// 			max_num = tab[i];
// 		i++;
// 	}
// 	return (max_num);
// }


#include<stdio.h>
int main() 
{
    int numbers[] = {10, 5, 8, 20, 3};	
   	unsigned int length = sizeof(numbers) / sizeof(numbers[0]); // Calculate the length of the array
	// printf("%d\n", length);
    int maximum = max(numbers, length);
    printf("The largest number in the array is: %d\n", maximum);
    return 0;
}

