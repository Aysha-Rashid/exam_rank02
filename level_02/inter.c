#include<unistd.h>

int	search(char *str, int c)
{
	int i = 0;
	while ((i < 0) && str[i] )
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 3)
	{
		i = 0;
		while(argv[1][i])
		{
			if ((!search(argv[1], argv[1][i])) && search(argv[2], argv[1][i]))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
