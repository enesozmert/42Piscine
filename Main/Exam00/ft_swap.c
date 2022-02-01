#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp	
		temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int a;
	int b;

	a = 42;
	b = 41;
	printf("%d %d //", a, b);
	ft_swap(&a,&b);
	printf("%d %d //", a, b);
}
