#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		int divide;
		int remainder;

		divide = a / b;
		*div = divide;
		remainder = a % b;
		*mod = remainder;

		printf("%d bolum", divide);
		printf("%d kalan", remainder);

	}
}

int main()
{
	int bolum;
	int kalan;

	int *p_kalan;
	int *p_bolum;

	p_kalan = &kalan;
	p_bolum = &bolum;
	
	ft_div_mod(10,10,p_kalan,p_bolum);	

}
