#include <stdio.h>

int ft_fibonacci(int index)
{
	int result;

	if (index > 1)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (result);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (-1);
}

int main()
{
	int num;

	num = 8;
	printf("%d", ft_fibonacci(num));
	
}
