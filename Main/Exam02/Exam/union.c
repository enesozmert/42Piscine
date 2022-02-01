#include <stdio.h>
#include <unistd.h>

char *ft_join(char *str1, char *str2)
{
	int i = 0;
	while(*str1)
	{
		i++;
		str1++;
	}
	while(str2)
	{
		str1[i] = *str2;
		str2++;
		i++;
	}
	return(str1);
}

int ft_doublecheck(char *str, char c, int pos)
{
	int i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return(0);
		i++;	
	}
	return(1);
	
}
void ft_union(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	
	while(str1[i])
	{
		j = 0;
		while (str2[j]){
			if(str1[i] == str2[j])
			{
				if(ft_doublecheck(str1, str1[i], i) > 0)
				{
					write(1, &str1[i], 1);
				}	
			}
			j++;		
		}
		i++;
	}
}
int	main(int ac, char **av)
{
	if(ac > 1)
	{
		ft_union(av[1], av[2]);
	}
}
