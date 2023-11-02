#include<stdlib.h>
#include<stdbool.h>

int count_digit(int n)
{
	int count = 0;
	if (n == 0)
		return (1);
	while (n > 0)	
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int nbr)
{
	bool sign = nbr < 0;
	int count = count_digit(nbr) + sign;
	char *ptr;
   	ptr	= malloc(count + 1);
	if (ptr == NULL)
		return NULL;
	ptr[count] = '\0';
	if (sign)
	{
		*ptr = '-';
		count--;
		ptr[count] = -(nbr % 10) + '0';
		nbr = -(nbr / 10);
	}
	while (count > sign)
	{
		count--;
		ptr[count] = nbr % 10 + '0' ;
		nbr /= 10;
	}
	return (ptr);
}
