/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdursun <fdursun@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:32:00 by fdursun           #+#    #+#             */
/*   Updated: 2021/11/29 16:03:03 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	middle(int x, int y)
{
	int	col;
	int	row;

	row = 2;
	while (row <= y - 1)
	{
		col = 1;
		while (col <= x)
		{
			if (col == 1 || col == x)
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}

void	first(int x)
{
	int	col;

		ft_putchar('/');
		col = 1;
		while (col <= x - 2)
		{
			ft_putchar('*');
			col++;
		}
		if (col > 1)
		{
			ft_putchar('\\');
		}	
		ft_putchar('\n');

}

void	end(int x, int y)
{
	int	col;
	int	row;
	
	y = 0;
	row = y;
	while (row == y)
	{
		ft_putchar('\\');
		col = 1;
		while (col <= x - 2)
		{
			ft_putchar('*');
			col++;
		}
		if (col > 1)
		{
			ft_putchar('/');
		}
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
