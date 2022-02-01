#include <stdio.h>
static int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		len;

	i = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}

int 	main(void)
{
	char	r[] = {"Ben enes\n"};	
	char	t[] = {"Hello "};					
	ft_strlcat(t, r, 8);						 
	printf("%s",t);									
	return (0);							
}
