/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:32:38 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/01 11:34:20 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	empty;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				empty = *(tab + j + 1);
				*(tab + j + 1) = *(tab + j);
				*(tab + j) = empty;
			}
			j++;
		}
		i++;
	}	
}
