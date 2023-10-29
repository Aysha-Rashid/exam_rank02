#include<unistd.h>
#include<stdio.h>

int	search(char *str, char c, int len)
{
	int i = 0;

	while(str[i] && (i < len))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return(0);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char new[100];
	while(argv[1][i])
	{
		new[i] = argv[1][i];
		i++;
	}
	while(argv[2][j])
	{
		new[i] = argv[2][j];
		i++;
		j++;
	}
	new[i] = '\0';
	j = 0;
	// printf("%d", i);
	if (argc == 3)
	{
		while(i > 0)
		{
			if(!search(new, new[j], j))
				write(1, &new[j], 1);
			i--;
			j++;
		}
	}
	write(1, "\n", 1);
}