#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;
	int result;
	char curr;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		curr = str[i];
		if (curr == '\0')
		{
			break;
		}
		if (!(curr >= ' ') || curr == 127)
		{
			result = 0;
			break;
		}
		i++;
	}

	return (result);
}

int		main(void)
{
	char *str_valid;
	char *str_invalid;
	char *str_null;

	str_null = "";
	str_valid = "ENES0";
	str_invalid = "enes\7F";
	printf("should be 1: %d\n", ft_str_is_printable(str_null));
	printf("should be 1: %d\n", ft_str_is_printable(str_valid));
	printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
}


