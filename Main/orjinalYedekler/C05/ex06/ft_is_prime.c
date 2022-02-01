#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	int flag_prime;

	i = 2;
	flag_prime = 0;

    while (i <= nb / 2)
    {
        if (nb % i == 0)
        {
            flag_prime = 1;
        }
        i++;
    }

	if(nb < 2)
	{
		return (0);
	}
	if (flag_prime == 0)
	{
		return (1);
	}
	return (0);
}

int main()
{
	int num;

	num = -3;
	printf("%d", ft_is_prime(num));
}
