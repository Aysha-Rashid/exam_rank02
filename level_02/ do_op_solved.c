#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	int num1 = 0; // i should not initialized atoi directly in here
	int num3 = 0;
	int result = 0;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num3 = atoi(argv[3]);
		if (argv[2][0] == '-' )
			result = (num1 - num3);
		else if (argv[2][0] == '+')
			result = (num1 + num3);
		else if (argv[2][0] == '*')
			result = num1 * num3;
		else if (argv[2][0] == '/')
			result = num1 / num3;
		else if (argv[2][0] == '%')
			result = num1 % num3;
		printf("%d\n", result);
	}
	else 
		write(1, "\n", 1);
}

