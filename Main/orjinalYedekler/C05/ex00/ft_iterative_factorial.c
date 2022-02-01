#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int i;

	i = 1;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		i = nb * i;
		nb--;	
	}
	return (i);
}

int	main()
{
	int num;
	num = 13;
	printf("%d", ft_iterative_factorial(num));
}
