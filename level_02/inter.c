#include<unistd.h>

int search(char *str, int c, int len)
{
	int i = 0;
	while(str[i] && (len > i || len == -1))
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}


int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 3)
	{
		while(argv[1][i])
		{
			if(!search(argv[1], argv[1][i], i) && search(argv[2], argv[1][i], -1)) // we need to have a - number for len because it will always be + for first search
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}