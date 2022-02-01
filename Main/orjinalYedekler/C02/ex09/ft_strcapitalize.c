#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	char curr;

	i = 0;
	if (str[0] >= 'a' || str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		curr = str[i];
		if (curr == ' ' || (curr >= '!' && curr <= '/'))
		{
			i++;
			curr = str[i];
			if (curr >= 'a' && curr <='z')
			{
				curr = curr - 32;
			}
			else if(curr == ' ' || (str[i - 1] >= '!' && str[i -1] <= '/'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
			str[i] = curr;
		}
		i++;
	}
	return (str);
}

int	main()
{
	char array1[] = "salut, comment tu vas ? 42mots quarante# deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(array1));
}
