/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:04:20 by eozmert           #+#    #+#             */
/*   Updated: 2021/11/27 16:08:06 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_two_print(char f_text, char s_text)
{
	write(1, &f_text, 1);
	write(1, &s_text, 1);
}

void	ft_control(int num, int max)
{
	char	ch_a;
	char	ch_b;

	if (num <= 9)
	{
		ch_a = num + 48;
		ft_two_print('0', ch_a);
	}
	else if (num <= max)
	{
		ch_a = (num % 10) + 48;
		ch_b = (num / 10) + 48;
		ft_two_print(ch_b, ch_a);
	}
}

void	ft_catint(int first, int second)
{
	ft_control(first, 98);
	write(1, " ", 1);
	ft_control(second, 99);
	if (first != 98 || second != 99)
		ft_two_print(',', ' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_catint(a, b);
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
}
