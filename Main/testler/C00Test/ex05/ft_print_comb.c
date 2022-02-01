/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:51:18 by eozmert           #+#    #+#             */
/*   Updated: 2021/11/27 14:03:14 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_f(char text)
{
	write(1, &text, 1);
}

void	ft_control(char x, char y, char z)
{
	if (x != '7' || y != '8' || z != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				print_f(x);
				print_f(y);
				print_f(z);
				ft_control(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
