#include <stdio.h>

int main(void)
{
	int *nbr;
	int a;
	int **b;
	int *c;
	int *d;
		
	b = &nbr;
	a=10;
	nbr = &a;
	printf("// %d", a);
	printf("// %p", nbr);
	//printf("// %d", *nbr);
	printf("// %p", &a);
	printf("// %p", &nbr);
	printf("// %p", b);
	printf("// %p", &b); 
	printf("//c  %p", &c);
	printf("//c1 %p", c);
	printf("//d %p", &d);
	printf("//d1 %p", d);
}
