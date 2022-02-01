#include <unistd.h>

void aff_a(char *av)
{
	int i;
	
	i = 0;
	while (av[i])
	{
		if (av[i] == 'a')
		{
			write(1, &av[i], 1);
			break ;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		aff_a(av[1]);
	}
	else if (ac == 1)
	{
		write(1, "a\n" ,1);
	}
	write(1, "\n", 1);	
}
