/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:29:24 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/12 11:34:36 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	flag_prime;

	i = 2;
	flag_prime = 0;
	while (i <= nb / 2)
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
