#include <unistd.h>

// "abc" "aaa" "aab"
int main(int ac, char **av)
{
	int i;
	int length;
	
	i = 0;
	length = ac - 1;
	
	while (av[length][i])
	{
		write(1, &av[length][i], 1);
		i++;
	}
	write(1, "\n", 1);
	
}
