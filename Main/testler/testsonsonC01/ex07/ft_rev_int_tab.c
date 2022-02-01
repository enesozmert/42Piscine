/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:30:33 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/01 13:12:43 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	empty;

	index = 0;
	while (index < (size / 2))
	{
		empty = *(tab + index);
		*(tab + index) = *(tab + (size - index - 1));
		*(tab + (size - index - 1)) = empty;
		index++;
	}
}
