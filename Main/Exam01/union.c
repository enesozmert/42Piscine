#include <unistd.h>

int check_symbol(char *str, char c)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str == c)
		{
			return (1);
		}
		str++;
	}
	return (0);
}

void ft_union(char *str, char *u , int *p)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!check_symbol(u,str[i]))
		{
			write(1, &str[i], 1);
			u[*p] = str[i];
			(*p)++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	char u[1024];
	int p;

	if (ac == 3)
	{
		p = 0;
		ft_union(av[1], u, &p);
		ft_union(av[2], u, &p);
	}
	write(1, "\n", 1);
}
