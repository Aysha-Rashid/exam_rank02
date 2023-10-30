#include <unistd.h>
#include<stdlib.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void ft_putnbr(int num)
{
	int temp = num;
	int count = 1;
	while (temp > 9)
	{
		temp = temp / 10;
		count *= 10;
	}
	while (count > 0)
	{
		int digit = num / count;
		ft_putchar(digit + '0');
		num = num % count;
		count = count / 10;
	}
}

// void ft_putnbr(int num)
// {
// 	char result;
// 	if (num < 10)
// 	{
// 		result = num + '0';
// 		ft_putchar(result);
// 	}
// 	else
// 	{
// 		ft_putnbr(num/10);
// 		ft_putnbr(num%10);
// 	}
// }

int ft_atoi(char *str)
{
	long result = 0;
	int i = 0;
	while(str[i] >= '0' && str[i] <= '9' && str[i])
		result = (result * 10) + str[i++] - '0';
	return ((int)result);
}

int main (int argc, char **argv)
{
	int i = 1;
	int num = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (i <= 9)
	{
		num = ft_atoi(argv[1]);
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(num * i);
		write(1, "\n", 1);
		i++;
	}
}
