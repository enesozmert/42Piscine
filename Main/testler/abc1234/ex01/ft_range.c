/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:25:16 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/15 14:23:33 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	*str;

	i = 0;
	n = max - min;
	str = malloc(n * sizeof(int));
	if (str == NULL)
		return (0);
	if (min >= max)
		return (0);
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
