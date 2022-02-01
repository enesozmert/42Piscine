/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:11:54 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/01 09:53:54 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(int num)
{
	printf("değer %d ", num);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	num;

	num = 36;
	ft_ft(&num);
	ft_print(num);
    printf("%d",num)
}
