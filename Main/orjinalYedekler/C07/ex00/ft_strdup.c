/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:24:50 by eozmert           #+#    #+#             */
/*   Updated: 2021/12/15 14:14:40 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(char *src)
{
    int        i;
    int        n;
    char    *str;

    i = 0;
    n = ft_strlen(src);
    str = malloc(n * sizeof(char) + 1);
    if (str == NULL)
    {
        return (0);
    }
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}


int	main()
{
	char array1[] = "enessdfjhksdjhfdksjhfdskjfhdskjfhsdkjfhksdjfhksdjh1";
	char *result;

	result = ft_strdup(array1);	
	printf("%s", result);
}
