/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdursun <fdursun@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:43:52 by fdursun           #+#    #+#             */
/*   Updated: 2021/11/28 16:43:58 by fdursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	put_symbol(int row, int col, int x, int y)
{
    if (row == 1 || row == y && col == 1)
    {
        ft_putchar('/');
    }
    else if ((col == 1 || col == x) && col == 1)
    {
        ft_putchar('\\');
    }
    else if ((row == 1 &e& col == 1 && col == x)
    {
        ft_putchar('\\');
    }
    else if (row == 1 && col == x)
    {
        ft_putchar('/');
    }
	else if (row == 1 || row == y)
	{
		ft_putchar('-');
	}
	else if (col == 1 || col == x)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	point(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			put_symbol(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	rush(int x, int y)
{
	point(x, y);
}
