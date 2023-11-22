int		ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	long res = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = (res*10) + (str[i++] - '0');
	}
	return ((int)res*sign);
}


// #include<stdio.h>
// int main()
// {
// 	printf("%d\n", ft_atoi("-27"));

// }
