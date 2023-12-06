int ft_strchr(int c, const char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return (0);
}


char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;

    while(s1[i])
    {
        if(ft_strchr(s1[i], s2) == 1)
            return ((char *)s1);
        i++;
    }
    return (0);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     printf("%s",ft_strpbrk("hello", "brup"));
// }