#include <unistd.h>
int ft_check(char *str, char c, int pos){
	
	int i = 0;
	while(i < pos){
		if(str[i] == c)
			return(0);
		i++;
	}
	return (1);
}
void	ft_union(char *str1, char *str2)
{
	int i = 0;
	int k = 0;
	while(str1[i] != '\0'){
		i++;
		
	}
	while(str2[k])
	{
		str1[i++] = str2[k++];
	}
	str1[i] = '\0';
	i = 0;
	while(str1[i] != '\0'){
		
		if(ft_check(str1, str1[i], i) == 1){
			write(1, &str1[i], 1);
		}
			i++;
	}
}
int	main(int ac, char **av)
{
	if(ac == 3){
		ft_union(av[1], av[2]);
	}
}
