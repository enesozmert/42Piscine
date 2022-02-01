#include <unistd.h>
void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;
	int length;
	
	length = ac - 1;
	
	if (ac > 1)
	{
		ft_putstr(av[length]);
	}
	write(1, "\n", 1);
}
