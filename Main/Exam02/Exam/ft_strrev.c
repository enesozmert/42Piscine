#include <unistd.h>
#include <stdio.h>
// abc cba
int ft_len(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strrev(char *str)
{
	int len;
	int i;
	char tmp;
	
	i = 0;
	len = ft_len(str) - 1;
	while(i < len)
	{
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		//şiir
		i++;
		len--;
	}
	
	//printf("%s", str);
	return (str);
}
int	main(){

	printf("%s", ft_strrev("abc"));	
}
