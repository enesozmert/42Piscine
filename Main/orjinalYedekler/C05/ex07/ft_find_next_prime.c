#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	int flag_prime;

	i = 2;
	flag_prime = 0;
	if (nb != 2)
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
			{
				flag_prime = 1;
				break ;	
			}
			i++;
		}
	}	
	else if(nb < 2)
	{
		return (0);
	}

	if (flag_prime == 0)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	if (ft_is_prime(nb) == 0)
	{
		while (i < 2147483647 && ft_is_prime(nb) == 0)
		{
			nb++;
			if (ft_is_prime(nb) == 1)
			{
				return (nb);
				break ;
			}
			i++;
		}
	}
	return (nb);
}

int main()
{
	int num;
	num = 2147483641;
	printf("%d", ft_find_next_prime(num));
}
