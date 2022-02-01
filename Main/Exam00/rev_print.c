#include <unistd.h>

int ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int main(int ac , char **av)
{
	int index;
	int length;
	int empty;

	index = 0;
	if (ac == 2)
	{
		length = ft_strlen(av[1]);
		while (index < length)
		{
			empty = av[1][index];
			av[1][index] = av[1][length];
			av[1][length] = empty;
			index++;
			length--;
		}
		ft_putstr(av[1]);
	}
}
