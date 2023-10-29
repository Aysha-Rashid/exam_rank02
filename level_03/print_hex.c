#include<unistd.h>

int		ft_atoi(char *str)
{
	int i = 0;
	long res = 0;

	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return((int)res);
}

void ft_putchar(int c)
{
    write(1, &c, 1);
}
void ft_hexa(unsigned int num)
{
    if (num > 16)
    {
        ft_hexa(num / 16);
        ft_hexa(num % 16);
    }
    else if (num <= 16 && num > 9)
        ft_putchar(num % 10 + 'a');
    else if (num < 10)
        ft_putchar (num % 10 + '0');
}


int main(int argc, char **argv)
{
    int num = ft_atoi(argv[1]);
    if (argc == 2)
        ft_hexa (num);
    write(1, "\n", 1);
}
