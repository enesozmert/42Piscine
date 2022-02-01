#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(int *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

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
	return (str);	
}

void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}

int main()
{
	int max;
	int min;
	int *str;
	int i;

	i = 0;
	max = 10;
	min = 1;
	str = ft_range(min, max);
	//printf("%d", ft_strlen(str));
	print_test(str, 9);
}
