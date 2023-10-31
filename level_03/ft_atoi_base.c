int ft_atoi_base(const char *str, int str_base)
{
    int nb = 0;
    int i = 0;
    int sign = 1;

    if (str[0] == '-')
    {
        sign *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    while(((str[i] >= '0' && str[i] <= '9') && (str_base <= 16)) || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
    {
        nb = nb * str_base;
        if (str[i] >= '0' && str[i] <= '9')
            nb = nb + str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            nb = nb + str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            nb = nb + str[i] - 'A' + 10;
        i++;
    }
    return (nb * sign);
}

#include<stdio.h>
int main()
{
    printf("%d", ft_atoi_base("-577", 10));
}