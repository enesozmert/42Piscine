#include <stdlib.h>
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

int main()
{
    char *array[1000000];
    int i;
    
    i = 0;
    while (i < 1000000)
    {
        array[i] = "enes";
        i++;
    }
    printf("%s", ft_strjoin(1000000, array, "-"));
}
