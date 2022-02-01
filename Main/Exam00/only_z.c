#include <unistd.h>

int main()
{
	char z;

	z = 'z';
	write(1, &z ,1);
}
