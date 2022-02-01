/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:36:48 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/12 13:02:45 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	flag_prime;

	i = 2;
	flag_prime = 0;
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			flag_prime = 1;
			break ;
		}
		i++;
	}
	if (nb < 2)
	{
		return (0);
	}
	if (flag_prime == 0)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
	{
		while (nb < 2147483647 && ft_is_prime(nb) == 0)
		{
			nb++;
			if (ft_is_prime(nb) == 1)
			{
				return (nb);
				break ;
			}
		}
	}
	return (nb);
}
