#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int index;

	count = 0;
	index = 0;
	while (src[count])
		count++;
	if (size != 0)
	{
		while (src[index] && index < (size - 1))
		{
			printf("// %s // \n",&src[inde])
			*(dest + index) = *(src + index);
			//printf("// %s // \n", &src[index]);
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[] = "Source";
	char dest[] = "";
	unsigned int n;

	n = 4;
:
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
	return (0);
}
