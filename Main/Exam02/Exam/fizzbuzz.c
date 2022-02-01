#include <unistd.h>
void ft_putchar(int c)
{
	if (c > 9)
		ft_putchar(c / 10);
	write(1, &"0123456789"[c % 10], 1);
}

void ft_fizbuzz()
{
	int i;
	
	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_putchar(i);
		}
		write(1, "\n", 1);
		i++;
	}
}

int main()
{
	ft_fizbuzz();	
}




