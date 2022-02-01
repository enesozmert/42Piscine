#include <stdio.h>

void	ft_print(int num)
{

}

void	ft_swap(int *a, int *b)
{
 	int num_change;
	num_change = *a;
	*a = *b;
	*b = num_change;
}
int	main()
{
	
	int *pointer1;
	int *pointer2;
	int num1;
	int num2;
	
	num1 = 16;
	num2 = 48;
	
	pointer1 = &num1;
	pointer2 = &num2;
	
	ft_swap(pointer1,pointer2);
	printf("%d",num1);
	printf("%d",num2);
	
}
