#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{

	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	char str1[] = {"1234567890"};
	char str2[] = {"1234567890"};
  
	if (ft_strcmp(str1, str2) == 0)
    	write(1, "ok", 2);
	else
    	write(1, "no", 2);
	write(1, "\n", 1);
	return (0);
}
