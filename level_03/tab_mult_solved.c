#include<unistd.h>
#include<stdlib.h>
void ft_putchar(int c)
{
	write(1, &c, 1);
}
int ft_atoi(char *str) 
{
	int i = 0;
	long r = 0;
	while (str[i] >= '0' && str[i] <= '9')
		r = (r * 10) + str[i++] - '0';
	return ((int)r);
}

void number_convert(int num)
{
	if (num > 9)
		number_convert(num / 10);
	ft_putchar (num % 10 + '0');
}

int main(int argc, char **argv) 
{
	if (argc != 2)
	{
        write(1, "\n", 1);
		return 1;
    }
	int number = ft_atoi(argv[1]);
	int i = 1;
	while (i <= 9 && *argv[1]) 
	{
		number_convert(i);
		write(1, " x ", 3);
		number_convert(number);
		write(1, " = ", 3);
		number_convert(number * i);
		ft_putchar('\n');
		i++;
	}
}
