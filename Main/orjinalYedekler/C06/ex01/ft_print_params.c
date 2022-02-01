/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:04:59 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/13 11:05:27 by eozmert          ###   ########.fr       */
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

void	ft_print_params(char **str)
{
	int	i;
	int	j;

	j = 1;
    i = 1;
	while (str[i])
	{
		ft_putstrline(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_print_params(av);
	}
}
