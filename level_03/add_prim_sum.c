#include<unistd.h>

int		ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	long res = 0;

	while(str[i] == ' ' && str[i] == '\t' && str[i])
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return((int)res * sign);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	is_prime(int num)
{
	int i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);	
}

#include<stdio.h>
int main(int argc, char **argv)
{
	int i = 0;
	int num = ft_atoi(argv[1]);
	int total = 0;

	if(argc != 2 || num < 0)
	{
	  	write(1, "0\n", 2);
		return (0);
	}
	else if (argc == 2)
	{
		i = 2;
		while (i <= num)
		{
			if (is_prime(i) == 1)
				total = total + i;
			i++;
		}
		ft_putnbr(total);
	}
	write(1, "\n", 1);	
}
