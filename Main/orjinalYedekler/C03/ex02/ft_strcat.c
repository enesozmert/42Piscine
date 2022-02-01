#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	char *cpy_dest;
	
	cpy_dest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (cpy_dest);
}

int main()
{
	char array1[] = "enes";
	char array2[] = " enes1";
	
	printf("%s", ft_strcat(array1, array2));

}
