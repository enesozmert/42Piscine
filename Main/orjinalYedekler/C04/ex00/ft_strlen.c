#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main()
{
	char array1[] = "enes";
	int length;
	length = ft_strlen(array1);

	printf("%d", length);
}
