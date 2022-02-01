#include <unistd.h>
void	ft_write(int number)
{
	if (number > 9)
		ft_write(number / 10);
	write(1, &"0123456789"[number %10], 1);
}

void	fizzbuzz()
{
	int number = 1;
	while (number <= 100)
	{
		
	
	if(number % 15 == 0)
	{
		write(1, "fb", 2);
	}
	else if (number % 3 == 0)
	write(1, "f", 1);
	else if (number % 5 == 0)
	write(1, "b", 1);
	else
	ft_write(number);
	write(1, "\n", 1);
	number++;
}
}

int	main()
{
	fizzbuzz();
	
}
