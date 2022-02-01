#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	i = 0;
	while (i < size - 1)
	{
		printf("// %d i// \n",i);
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
		//printf("// %d i//",i);
	}
}

int main()
{
	int tab[11] = {4,5,6,2,3,4,2,3,4,4};

	ft_sort_int_tab(&tab[0],10);

	int i;
	i = 0;
	while (i < 11)
	{
		printf("%d", tab[i]);
		i++;
	}

}
