#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *char_total(char str)
{
	char *result;
	int i;

	i = 0;
	*result += str;

	return (result);
}

int sign_control(char *str, int *ptr_i) //negatif positif kontrolü
{
	int i;
	int count;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			count *= -1;
		}
		i++;
	}
	*ptr_i = i;
	return (count);
}

int ft_atoi(char *str, int *ptr_i) //dizinde sayıyı bul
{
	int sign;
	int result;
	int i;
	
	i = *ptr_i;
	result = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

char	nb_base(int nb, char *base)
{
	int length;
	char result;
	int i;
	length = ft_strlen(base);
	if (nb < 0)
	{
		nb *= -1;
	}
	if (nb < length)
	{
		ft_putchar(base[nb]);
		return (base[nb]);
	}
	if (nb >= length)
	{
		nb_base(nb / length, base);
		nb_base(nb % length, base);
	}
	return (base[nb]);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	char base_num;
	int sign;
	int result;
	int i;
	int index;

	i = 0;
	result = 0;
	sign = sign_control(str, &i);
	num = ft_atoi(str, &i);
	//printf("%d",num);
	base_num = nb_base(num, base) ? null : nb_base(num, base);
	//printf("%s",base_num);
	return (base_num);
}
int main()
{
	char *array1 ="	 ----+--42abc2:w35";
	char *base = "0123456789abcdef";
	int result;
	
	result = ft_atoi_base(array1, base);
	printf("%d", result);
}

