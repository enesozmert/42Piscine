#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int empty;
	
	i = 1;
	while (i < size)
	{
		j = 0;
		while(j < size - i)
		{
			if(*(tab + j) > *(tab + j + 1))
			{
				empty = *(tab + j + 1);
				*(tab + j + 1) = *(tab + j);
				*(tab + j) = empty;	
			}
			j++;
		}
		i++;
	}	
}

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
    printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int main()
{
	int numbers[] = {9,7,5,4,3,2,1,6,0,8,30,300,401,4001,88,12,34,4234,545,43242,2343,3432,322323,324,43243,32423,243,324,55,66,77,54,42,53};
	ft_sort_int_tab(numbers, 34);
	putarr(numbers,34);
}

