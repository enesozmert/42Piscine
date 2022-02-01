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

char *ft_rev_print (char *str)
{
	int length;

	// str = "abc";
	length = ft_strlen(str);
	while (length >= 0)
		write(1, &str[--length], 1);
}

int main(int ac , char **av)
{
	int i;
	
	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			ft_rev_print(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
