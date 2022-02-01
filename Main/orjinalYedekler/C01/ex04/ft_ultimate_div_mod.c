
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    
    if (*b != 0)
    {
        div = *a / *b;
        mod = *a % *b;
        *a = div;
        *b = mod;
    }
}

int main()
{
    int a;
    int b;

    int *p_a;
    int *p_b;
    
    a = 10;
    b = 0;

    p_a = &a;
    p_b = &b;
    
    ft_ultimate_div_mod(p_a, p_b);

    //printf("%d // %d", a, b);
}

