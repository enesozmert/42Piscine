#include <stdio.h>

int ft_sqrt(int nb)
{
	long	index;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	index = 2;
	if (nb >= 2)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

int main()
{
	int num;

	num = 16;
	printf("%d", ft_sqrt(num));
}
