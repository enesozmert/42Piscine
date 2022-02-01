#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int control(char *str)
{
	int	i;
	int	j;
	int length;

	length = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || length == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int length;
	int check;
	long nb;

	check = check(base);
	length = ft_strlen(base);
	nb = nbr;
	if (check == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < length)
			ft_putchar(base[nb]);
		if (nb >= length)
		{
			ft_putnbr_base(nb / length, base);
			ft_putnbr_base(nb % length, base);
		}
	}
}
int	main()
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
}
