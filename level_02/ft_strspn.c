#include<stddef.h>
char *ft_strchr(const char *str, int c)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return((char *)str);
		i++;
	}
	return (NULL);
}

size_t ft_strspn(const char *s, const char *accept)
{
	int i = 0;

	while(s[i])
	{
		if((ft_strchr(accept, s[i]) == 0))
			break;
		i++;
	}
	return (i);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	printf("%lu\n", ft_strspn("hello", "hleoll"));
// 	printf("%lu\n", strspn("hello", "hleoll"));
// }