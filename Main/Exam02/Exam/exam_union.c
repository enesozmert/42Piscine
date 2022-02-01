#include <unistd.h>
#include <stdio.h>

int check_double(char *str, char c, int pos)
{
	int i;
	
	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_cpy(char *str1 , char *str2)
{
	int i;
	int length;
	
	i = 0;
	length = ft_strlen(str1);
	while (str2[i] != '\0')
	{
		str1[length] = str2[i];
		i++;
		length++;
	}
	str1[length] = '\0';
	return (str1);
}

void ft_union(char *str1, char *str2)
{
	int i;
	char *str;
	
	i = 0;
	str = ft_cpy(str1, str2);
	while (str[i])
	{
		if (check_double(str,str[i],i) == 0)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
        if(ac == 3)
        {
                ft_union(av[1], av[2]);
                write(1, "\n", 1);
        }
        write(1, "\n", 1);

}
