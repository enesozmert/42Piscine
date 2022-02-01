#include <stdio.h>
#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;
	index=0;
	while(*str > index)
	{
		ft_print_char(*str);
		index++;
		str++;
	}	
}

int main()
{
	char *p_str;
	char str[]="Hjhdsfkdskhjsdf";
	p_str = str;
	ft_putstr(p_str);
}
