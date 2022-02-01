/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:23:44 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/07 10:32:31 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p_to_find;
	char	*p_str;

	p_str = to_find;
	if (*p_str == '\0')
		return (str);
	while (*str)
	{
		if (*str == *p_str)
		{
			p_to_find = str;
			while (*p_to_find == *p_str || *p_str == '\0')
			{
				if (*p_str == '\0')
					return (str);
				p_to_find++;
				p_str++;
			}
			p_str = to_find;
		}
		str++;
	}
	return (0);
}
