#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main()
{
	char word[] = "ENESözmert49058345843958934085333";
	char *p_word;
	int length;

	p_word = word;
	length = ft_strlen(p_word);
	printf("%d", length);
}
