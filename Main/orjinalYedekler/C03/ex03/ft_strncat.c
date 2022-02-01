#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int length;

	i = 0;
	length = 0;
	while (dest[length])
	{
		length++;
	}
	while (src[i] && i < nb)
	{
		dest[length] = src[i];
		length++;
		i++;
	}
    dest[length] = '\0';
	return (dest);
}

int main()
{
	char array1[]="enes";
	char array2[]=" enes1";

	printf("%s",ft_strncat(array1, array2, 1));

}
