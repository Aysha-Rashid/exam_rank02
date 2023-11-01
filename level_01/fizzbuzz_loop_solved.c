#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void put_num(int num)
{
	int count = 1;
	int temp = num;
	while (temp > 10)
	{
		temp = temp / 10;
		count *= 10; //position of the number in 10 base
	}
	while (count > 0)
	{
		int digit = num / count; //to print the number from the first index
		ft_putchar(digit + '0'); // print the current index 
		num = num % count; //to get the remaining number after printing the previous number
		count = count / 10; //remove the position of the index that was printed
	}
}

int main()
{
	int num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (num % 3 == 0)
			write(1, "fizz\n", 5);
		else if (num % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			put_num(num);
			write(1, "\n", 1);
		}
		num++;
	}
}
