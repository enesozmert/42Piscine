#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	char	*p_to_find;
	char	*p_str;

	p_str = to_find;
	if (*p_str == '\0')
		return (str);
	while (*str)
	{
		if (*str == *p_str)
		{
			p_to_find = str;
			while (*p_to_find == *p_str || *p_str == '\0')
			{
				if (*p_str == '\0')
					return (str);
				p_to_find++;
				p_str++;
			}
			p_str = to_find;
		}
		str++;
	}
	return (0);
}

int		main(void)
{
	char str[] = "2837482372";
	char to_find[] = "23";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}
