#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char **ft_split(char *str)
{
	char **tab;
	int i = 0; // index of the str
	int i2 = 0; // paramenters
	int i3 = 0; // index used for each word
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	tab = (char **)malloc(sizeof(char *) * 100);
	while(str[i])
	{	
		if(str[i] != ' ' && str[i] != '\t')
		{
			i3 = 0;
			tab[i2] = malloc(100);
			while(str[i] && str[i] != ' ' && str[i] != '\t')
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	// printf("this is a test \n %d", i3);
	return (tab);
}

int main(int argc, char **argv)
{
	char **num;
	int i = 1;
	if (argc > 1)
	{
		num = ft_split(argv[1]);
		while (num[i])
		{
			ft_putstr(num[i]);
			write(1, " ", 1);
			i++;
		}
		ft_putstr(num[0]);
	}
	write(1, "\n", 1);
}