#include <stdio.h>
#include <unistd.h>

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

int	nb_base(char str, char *base)
{
	int nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	char num_char[40]="";
	int base_num;
	int sign;
	int i;
	int index;
	int result;

	i = 0;
	index = 0;
	result = 0;
	sign = sign_control(str, &i);
	num = ft_atoi(str, &i);
	
	while (num > 0)
	{
		num_char[index] = (num % 10) + '0';
		num = num / 10;
		index++;
	}
	index = 0;
	while (num_char[index])
	{
		//base_num = nb_base(num_char[index], base);
		//printf("base_num : %d \n", base_num);
		result *= 10;
		result += num_char[index] - '0';
		printf("num_char i: %c \n",num_char[index]);
		index++;
	}
	//printf("abc %s",num_char);
	//printf("result: %d \n",result);
	return (result);
}
int main()
{
	char *array1 ="	 ----+--42abc2:w35";
	char *base = "0123456789abcdef";
	int result;
	
	result = ft_atoi_base(array1, base);
	printf("%d", result);
}

