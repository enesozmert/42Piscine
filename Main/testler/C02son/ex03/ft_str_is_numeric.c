/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 13:31:37 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/05 13:37:35 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	valid;

	i = 0;
	valid = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			break ;
		}
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			valid = 0;
			break ;
		}
		i++;
	}
	return (valid);
}
