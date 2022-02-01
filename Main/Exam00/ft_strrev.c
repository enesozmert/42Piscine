#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char *ft_strrev(char *str)
{
	int index;
	int length;
	int empty;
	
	index = 0;
	length = ft_strlen(str) - 1;
	while (index < length)
	{
		empty = str[length];
		str[length] = str[index];
		str[index] = empty;
		index++;
		length--;
	}
	return (str);
}

int main()
{
	char array[] = "enesozmert";
	ft_strrev(array);

	int i;

	i=0;
	while (10 > i)
	{
		printf("%c",array[i]);
		i++;
	}
}
