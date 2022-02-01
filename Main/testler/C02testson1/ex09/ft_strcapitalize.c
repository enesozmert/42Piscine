/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:48:56 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/05 17:05:08 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	i;

	i = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (i == 0 && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 32;
			i++;
		}
		else if (i > 0 && (str[index] >= 'A' && str[index] <= 'Z'))
			str[index] += 32;
		else if ((str[index] < '0') || (str[index] > '9' && str[index] < 'A')
			|| (str[index] > 'Z' && str[index] < 'a') || (str[index] > 'z'))
		{
			i = 0;
		}
		else
			i++;
		index++;
	}
	return (str);
}
