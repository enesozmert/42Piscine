/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:25:45 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/15 14:23:14 by eozmert          ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		return (0);
	}
	return (max - min);
}
