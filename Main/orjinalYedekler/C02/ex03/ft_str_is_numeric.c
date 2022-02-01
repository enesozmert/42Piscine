#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int	i;
	int	valid;
	char	curr;

	i = 0;
	valid = 1;
	while (str[i] != '\0')
	{
		curr = str[i];
		if (curr == '\0')
		{
			break ;
		}
		if (!(curr >= '0' && curr <= '9'))
		{
			valid = 0;
			break ;
		}
		else if (curr == '\0')
		{
			valid = 0;
			break ;
		}
		i++;
	}
	return (valid);
}

int		main(void)
{
	char *str_valid;
	char *str_invalid;
	char *str_empty;

	str_valid = "123456";
	str_invalid = "123A56";
	str_empty = "";
	printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
	printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));
	printf("should be empty 0: %d\n", ft_str_is_numeric(str_empty));

}
