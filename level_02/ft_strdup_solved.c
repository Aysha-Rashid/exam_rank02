#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	char *ptr;
	while(src[i])
		i++;
	ptr = malloc(i + 1);
	if(!ptr)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include<stdio.h>
int main()
{
	char src[] = "hello";
	char *ptr;
	ptr = ft_strdup(src);
	printf("%s\n", ptr);
}*/
