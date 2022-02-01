#include <stdlib.h>
#include <stdio.h>

int check_operator(char str)
{
	int i;
	i = 0;
	
	if (str == ' ' || str == '\n' || str == '\t' || str == NULL)
	{
		return (1);	
	}
	else
		return (0);
	
}

int ft_operatorlen(char *str)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	
	while(str[i])
	{
		if (check_operator(str[i]) == 0)
			count++;
		i++;
	}
	return (count);
}

int ft_charlen(char *str)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	
	while(str[i])
	{
		if (check_operator(str[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

char *ft_word(char *str)
{
	int i;
	int j;
	int size;
	char *str1;
	
	i = 0;
	j = 0;
	size = ft_operatorlen(str);
	str1 = (char *)malloc((size + 1) * sizeof(char));
	while (str[i])
	{
		str1[j++] = str[i++];
	}
	str1[j] = '\0';
	return (str1);
}

char    **ft_split(char *str)
{
	int i;
	int j;
	int size;
	char **strings;
	
	i = 0;
	j = 0;
	size = ft_charlen(str);
	strings = (char **)malloc((size + 1) * sizeof(char *));
	while (*str != '\0')
	{
		while (*str != '\0' && check_operator(*str))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str);
			i++;
		}
		while (*str && !check_operator(*str))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

int main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
