#include <unistd.h>
#include <string.h>
#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

int main()
{
	char array1[] = "abaa";
	char array2[] = "aaaa";
	int result;
	int result1;

	result = strncmp(array1, array2, 2);
	result1 = ft_strncmp(array1, array2, 2);
	printf("%d //",result);
	printf("%d //",result1);
}
