int *ft_atoi(char *str)
{
	int i;
	int result;
	int sign;
	result = 0;
	i = 0;
	sign = 1;
	

		while((str[i] >= '\t' && str <= '\r') || str == ' ')
		{
			i++;
		}
	if(str[i] == '-')
	{
		sign = -1;
	}	
	
	while(str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - '0';
		}
		return(result*sign);
}


int main(int ac, char **av)
{
	printf("%d", ft_atoi(av[1]));
}
