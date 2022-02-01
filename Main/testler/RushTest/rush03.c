/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdursun <fdursun@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:50:47 by fdursun           #+#    #+#             */
/*   Updated: 2021/11/28 20:00:31 by fdursun          ###   ########.fr       */
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
			if (row == 1 || row == y || col == 1 || col == x)
			{
				ft_putchar('B');
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
	int	row;

	row = 1;
	while (row == 1)
	{
		ft_putchar('A');
		col = 1;
		while (col <= x - 2)
		{
			ft_putchar('B');
			col++;
		}
		ft_putchar('C');
		ft_putchar('\n');
		row++;
	}
}

void	end(int x, int y)
{
	int	col;
	int	row;

	row = y;
	while (row == y)
	{
		ft_putchar('A');
		col = 1;
		while (col <= x - 2)
		{
			ft_putchar('B');
			col++;
		}
		ft_putchar('C');
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
