#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (power != 0 )
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}

int main()
{
	int num;
	int power;
	num = -5;
	power = 1;
	printf("%d", ft_recursive_power(num, power));
}
