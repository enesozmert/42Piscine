/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:36:59 by eozmert           #+#    #+#             */
/*   Updated: 2021/11/26 11:37:44 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	nega;
	char	pos;

	nega = 'N';
	pos = 'P';
	if (n < 0)
	{
		write(1, &nega, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}
