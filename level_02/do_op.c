#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int num3 = atoi(argv[3]);

	if (argc == 4)
	{
		if (argv[2][0] == '*')
			printf("%d", (num1 * num3));
		else if (argv[2][0] == '/')
			printf("%d", (num1 / num3));
		else if (argv[2][0] == '+')
			printf("%d", (num1 + num3));
		else if (argv[2][0] == '-')
			printf("%d", (num1 - num3));
		else if (argv[2][0] == '%')
			printf("%d", (num1 % num3));
	}
	printf("%s", "\n");
}