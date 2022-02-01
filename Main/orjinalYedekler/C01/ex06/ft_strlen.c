#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int index;
	index = 0;
	while (*str > index)
	{	
		index++;
		str++;
	}
	return index;
}

int main()
{
	char str[] = "Hello World Enes";
	char *p_str;
	int strlen;

	p_str = str;
	strlen = ft_strlen(p_str);
	printf("%d", strlen);
}
