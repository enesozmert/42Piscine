/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:14:24 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/09 17:28:18 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_symbol(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
		{
			return (1);
		}
		str++;
	}
	return (0);
}

void	ft_union(char *s, char *u, int *p)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (!ft_check_symbol(u, s[i]))
		{
			write(1, &s[i], 1);
			u[*p] = s[i];
			(*p)++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		p;
	char	u[1024];

	if (argc == 3)
	{
		p = 0;
		ft_union(argv[1], u, &p);
		ft_union(argv[2], u, &p);
	}
	write(1, "\n", 1);
	return (0);
}
