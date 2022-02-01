#include <unistd.h>

void	ft_putchar(char x);

void    middle(int x, int y)
{
    int    col;
    int    row;


    row = 2;
    while (row <= y - 1)
    {
        col = 1;
        while (col <= x)
        {
            if (row == 1 || row == y)
            {
                ft_putchar('*');
            }
            else if (col == 1 || col == x)
            {
                ft_putchar('*');
            }
            else
            {
                ft_putchar('-');
            }
            col++;
        }
        row++;
        ft_putchar('\n');
    }
}

void    first(int x)
{
    int    col;
    int    row;

    row = 1;
    while (row == 1)
    {
        ft_putchar('/');
        col = 1;
        while (col <= x -2 )
        {
            ft_putchar('*');
            col++;
        }
        ft_putchar('\\');
        ft_putchar('\n');
        row++;
    }

}

void    end(int x, int y)
{
    int    col;
    int    row;

    row = y;
    while (row == y )
    {
        ft_putchar('\\');
        col = 1;
        while (col <= x -2 )
        {
            ft_putchar('*');
            col++;
        }
        ft_putchar('/');
        ft_putchar('\n');
        row++;
    }
}

void	rush(int x, int y)
{
    first(x);
    middle(x, y);
    end(x, y);
}
