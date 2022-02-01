#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_char_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	unsigned char curr;

	i = 0;
	while (str[i] != 0)
	{
		curr = str[i];
		if (curr == '\0')
			break;
		if (is_char_printable(curr))
			ft_putchar(curr);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[curr / 16]);
			ft_putchar("0123456789abcdef"[curr % 16]);
		}
		i++;
	}
}

int		main(void)
{
	char	*string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}
