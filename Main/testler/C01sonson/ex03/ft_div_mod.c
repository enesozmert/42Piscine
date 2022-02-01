/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:05:09 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/01 10:09:12 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	divide;
	int	remainder;

	if (b != 0)
	{
		divide = a / b;
		*div = divide;
		remainder = a % b;
		*mod = remainder;
	}
}
