#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int n;
	int *str;

	i = 0;
	n = max - min;
	str = malloc(n * sizeof(int));
	if (str == NULL)
		return (0);
	else if (min >= max)
		return (0);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	free(str);
	return (str);
}

int ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		return (0);
	}
	return (max - min);
}

void ft_put(int *str, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", str[i]);
		i++;
	}
}

int main()
{
	int max;
	int min;
	int result;
	int *str;

	max = 10;
	min = 1;
	result = ft_ultimate_range(&str, min ,max);
	ft_put(str, 9);
}
