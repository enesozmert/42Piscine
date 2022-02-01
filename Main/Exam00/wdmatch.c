#include <unistd.h>

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index] , 1);
		index++;
	}
}

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

int main(int ac, char **av)
{
	int i;
	int j;
	int length;

	i = 0;
	j = 0;
	length = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					length++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (length == ft_strlen(av[1]))
		{
			ft_putstr(av[1]);
		}
		write(1, "\n", 1);
		return (0);
	}
}
