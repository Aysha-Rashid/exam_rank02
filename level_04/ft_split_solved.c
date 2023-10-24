#include<stdlib.h>


int	ft_wordlen(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return (i);
}

char	*word_dupe(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *word = malloc(sizeof(char) * (len + 1));
	
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int word_index = 0;
	
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		array[word_index] = word_dupe(str);
		++word_index;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
}

int		count_words(char *str)
{
	int num_words = 0;
	
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{
		++num_words;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
	return (num_words);
}

char	**ft_split(char *str)
{
	int		num_words;
	char	**array;
	
	num_words = count_words(str);
	array = malloc(sizeof(char *) * (num_words + 1));
	
	array[num_words] = 0;
	fill_words(array, str);
	return (array);
}

/*
int    count_words(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        count++;
        while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
            i++;
        while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
            i++;
    }
    return (count);
}

int wordlen(char *str)
{
    int i = 0;
    while (str[i] && str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
        i++;
    return (i);
}

char    *str_dup(char *str)
{
    char *dup;
    int i = 0;
    int len = wordlen(str);
    dup = malloc(len + 1);
    while(i < len)
    {
        dup[i] = str[i];
        i++;
    }
    dup[len] = '\0';
    return (dup);
}

void count_characters(char **string, char *str)
{
    int word_index = 0;
    while (*str != '\0')
    {
        string[word_index] = str_dup(str);
        ++word_index;
        while (*str != '\0' && *str != ' ' && *str!= '\t' && *str != '\n')
            ++str;
        while ((*str) && *str == ' ' || *str == '\t' || *str == '\n')
            ++str;
    }
}

char    **ft_split(char *str)
{
    char **string;
    int count_string = count_words(str);

    string = malloc(sizeof(char*)*(count_string + 1));
    if(!string)
        return (NULL);
    count_characters(string, str);
    return (string);
}
*/
/*
#include<stdio.h>
int main()
{
    char *str = "three words apart";
    char **result = ft_split(str);
    //if (result)
    //{
        int i = 0;
        while(result[i])
        {
            printf("%s\n", result[i]);
            i++;
        }
    //}
}*/
