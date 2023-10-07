#include <unistd.h>

void ft_putchar(int c)
{
	write(1, &c, 1);
}

void print_bits(unsigned char octet)
{
	int div = 128;
	int num = octet;

	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num = num % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}

// int main()
// {
// 	print_bits(15);
// }
// 2^0 = 1;
// 2^1 = 2;
// 2^2 = 4;
// 2^3 = 8;
// 2^4 = 16;
// 2^5 = 32;
// 2^6 = 64;
// 2^7 = 128;