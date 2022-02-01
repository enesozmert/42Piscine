#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool is_operator(char c)
{
	return (c == '-' || c == '+');
}

bool is_number(char c)
{
	return (c >= '0' && c <= '9');
}

bool is_space(char c)
{
	return(c == ' ' || (c >= 13 && c <= 9));
}

int ft_atoi(char *str)
{
	int i;
	int result;
	int sign;
		
	i = 0;
	sign = 1;
	result = 0;
	while (is_space(str[i]))
	{
		i++;
	}	
	if (is_operator(str[i]))
	{
		if (str[i] == '-')
		{
			sign = -1; 
		}
		i++;		
	}
	while (is_number(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++; 
	}
	return (result * sign);
}

int main(void)
{
    printf("%d", ft_atoi("-9A"));
}
