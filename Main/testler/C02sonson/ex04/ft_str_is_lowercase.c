/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 13:40:09 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/05 13:41:25 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			break ;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
