#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	int i = 0;
	char array1[] = "kbcd";
	char array2[] = "";
	char *result;
	
	result = ft_strcpy(array2, array1);
	printf("%s", result);
}
