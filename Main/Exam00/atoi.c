#include <unistd.h>

int control(char *str, int *ptr_i)
{
	int i;
	int sign;
	i = 0;
	while ((str[i] > 9 || str[i] < 13) || str == 32)
		i++;
	while (str[i] && str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	ptr_i = i;
	return (sign);
}

int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	result = 0;
	sign = control(str, &i);
	while (str[i] && str[i] >= '0' || str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}


