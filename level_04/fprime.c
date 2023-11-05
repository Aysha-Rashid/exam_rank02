#include<stdio.h>
#include<stdlib.h>

// int is_prime(int nb)
// {
// 	int i = 2;
// 	while(i < nb)
// 	{
// 		if (nb % i == 0)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

int main(int argc, char **argv)
{
	int flag = 1;
	int num = atoi(argv[1]);
	int factor = 2;

	if (argc == 2)
	{
		if (num == 1)
			printf("1");
		while (factor <= num)
		{
			if(num % factor == 0)
			{
				if(flag == 1)
					printf("%d", factor);
				else if (flag == 0)
					printf("*%d", factor);
				flag = 0;
				num = num / factor;
			}
			else 
				factor++;
		}
	}
	printf("\n");
}