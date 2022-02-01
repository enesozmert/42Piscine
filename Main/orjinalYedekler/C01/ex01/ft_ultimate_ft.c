#include <unistd.h>
#include <stdio.h>

void	ft_print(int num)
{
	printf("%d", num);
}

void	ft_ultimate_ft(int *********nbr)
{
	int index;
	index = *********nbr;
	ft_print(index);
}

int	main(void)
{
	int *a;
	int **b;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********h;
	int *********i;

	int number = 42;
	a = &number;
	printf("%p", &number);
	//printf("// %d", *a);
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	//printf("// %d", *a);
	ft_ultimate_ft(i);
}

