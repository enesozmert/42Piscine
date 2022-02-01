/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:03:50 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/13 12:22:37 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstrline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	get_params(int ac, char **str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		ft_putstrline(str[ac - 1]);
		ac--;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		get_params(ac, av);
	}
}
