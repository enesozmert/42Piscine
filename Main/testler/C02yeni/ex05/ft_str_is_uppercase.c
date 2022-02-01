#include <stdio.h>

int ft_str_is_uppercase(char *str)
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
		if (!(curr >= 'A' && curr <= 'Z'))
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
	str_valid = "ENES";
	str_invalid = "ENEs";
	printf("should be 1: %d\n", ft_str_is_uppercase(str_null));
	printf("should be 1: %d\n", ft_str_is_uppercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_uppercase(str_invalid));
}

