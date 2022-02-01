#include <unistd.h>
#include <stdio.h>

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

void    ft_rev_int_tab(int *tab, int size)
{
    int index;
    int index_end;
    int empty;

    index = 0;
    index_end = 0;
    while (index < (size / 2))
    {
        empty = *(tab + index);
        *(tab + index) = *(tab + (size - index - 1));
        *(tab + (size - index - 1)) = empty;
        index++;
    }
}

int main()
{
    int numbers[] = {9,7,5,4,3,2,1,0,8,6};
    putarr(numbers, 10);
    ft_rev_int_tab(numbers, 10);
    putarr(numbers,10);
}
