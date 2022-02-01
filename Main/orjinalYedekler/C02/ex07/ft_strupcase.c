#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	char curr;

	i = 0;
	while (str[i] != '\0')
	{
		curr = str[i];
		if (curr == '\0')
		{
			break ;
		}
		if ((curr >= 'a') && (curr <= 'z'))
		{
		   	str[i] -= 32;
		}
		i++;
	}
	return (str); 
}

int		main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;
	
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_all;
	p_all = allcases;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strupcase(p_lwr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strupcase(p_all));
	printf("Empty = %s\n-----\n", ft_strupcase(p_emp));

}
