
#include <unistd.h>
#include<stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	int flag = 0;

	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
			flag = 1;
		}
		int start = i; // 5
		while (argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i] != '\0')
			i++;
		i++; // 11
		int end = i - 1; // Adjust end index to exclude the space or tab before the first word
		// Print the rest of the sentence // 10
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (flag == 0)
				{
					write(1, " ", 1);
					flag = 1;
				}
			}
			else 
			{
				write(1, &argv[1][i], 1);
				flag = 0;
			}
			i++;
		}
		printf("\ni = %d\n,", i);
		// Print the first word
		i = start;
		write(1, " ", 1);
		while (i <= end)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	// printf("\nthis argc[%i]\n argv[%c]\n", argc , argv[1][i]);
	}
	else if(argc > 2)
	{
		int x = 0; 
		while (argv[1][x])
		{
			write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
