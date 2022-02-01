#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
			write(1, "\n", 1);
		}
		else if (number % 3 == 0)
		{
			write(1, "fizz", 4);
			write(1, "\n", 1);
		}
		else if (number % 5 == 0)
		{			
			write(1, "buzz", 4);
			write(1, "\n", 1);
		}
		else
			printf("%d \n", number);
		//write(1, "\n", 1);
		number++;
	}
}
