#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while(i < power){
		result = result * nb;
		i++;
	}
	return (result);
}

int main()
{
	int num;
	int power;
	num = 2;
	power = 6;
	//printf("%d", num);
	//printf("%d", power);
	printf("%d",ft_iterative_power(num, power));
}
