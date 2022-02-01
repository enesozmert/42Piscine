#include <stdlib.h>
#include <stdio.h>
int        ft_abs(int x)
{
    if (x < 0)
        return (-x);
    return (x);
}

int    *ft_range(int start, int end)
{
   int n;
   int i;
   int *str;
   
   i = 0;
   n = ft_abs(end - start) + 1;
   str = malloc(n * sizeof(int));
    if (str == NULL)
        return (0);
	if ( n == 1)
		str[0] = start;
   if (start < end)
   {
   		while (i < n)
		{
			str[i] = start + i;
			i++;
		}
   }
   else if (start > end)
   {
   		while (i < n)
		{
			str[i] = start - i;
			i++;
		}
   }
   return (str);
}

int        main(void)
{
    int *tab;
    int i = 0;
    int start = 3;
    int end = 1;
    int size = ft_abs(end - start) + 1;
    
    tab = ft_range(start, end);
    while(i < size)
    {
    printf("%i, ", tab[i]);
    i++;
    }
}
