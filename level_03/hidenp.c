#include<unistd.h>
#include <stdio.h>

// reem's code

// int ft_strlen(char *str)
// {
// 	int i =0;
// 	while(str[i])
// 		i++;
// 	return (i);
// }


// int main(int argc, char **argv)
// {
// 	int i = 0;
// 	int flag = 1;
// 	int j = 0;
// 	char new[ft_strlen(argv[1])];
// 	int new_counter = 0;
// 	if (argc == 3)
// 	{
// 		if (argv[1] == NULL)
// 		{
// 			write(1, "1\n", 2);
// 			return (0);
// 		}
// 		while (argv[1][i])
// 		{
// 			while (argv[2][j])
// 			{
// 				if(argv[1][i] == argv[2][j])
// 			  	{
// 					new[new_counter] = argv[1][i];
// 					new_counter++;
// 					break;
// 				}
// 				j++;
// 			}
// 			i++;
// 		}
// 		j =0;
// 		new[new_counter] = '\0';
// 		while(argv[1][j])
// 		{
// 			if (argv[1][j] == new[j])
// 				j++;
// 			else
// 			{
// 				flag = 0;
// 				break;
// 			}
// 		}
// 		if (flag == 0)
// 			write(1,"0",1);
// 		else if (flag == 1)
// 			write(1,"1",1);
// 	}
// 	write(1, "\n", 1);
// 	return 0;
// }

// github's code

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[1][i] != argv[2][j] && argv[2][j])
				j++;
			if (argv[1][i] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
			if (argv[2][j] == '\0')
			{
				write(1, "0\n", 2);
				return (0);
			}
			i++;
			j++;
		}
		write(1, "1", 1);
	}
	write(1, "\n", 1);
}