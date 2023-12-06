// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>



int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int nb = 0;
	if(str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void ft_putnum(int num)
{
	if (num > 9)
		ft_putnum(num / 10);
	ft_putchar(num % 10 + '0');
}

int is_prime(int nb)
{
	int i = 2;
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i = 2;
	int sum = 0;

	if(argc == 2)
	{
		int nb = ft_atoi(argv[1]);
		if (nb < 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		while(nb >= i)
		{
			if (is_prime(i) == 1)
				sum = sum + i;
			i++;
		}
		ft_putnum(sum);
	}
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	write(1, "\n", 1);
}
