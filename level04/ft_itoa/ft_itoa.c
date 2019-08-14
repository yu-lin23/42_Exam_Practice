/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:31:11 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/14 15:49:46 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    ft_length(int n)
{
    int i;
    if (n < 0)
    {
        n *= -1;
        i++;
    }
    while ((n / 10) > 0)
        i++;
return (i);
}

char    *ft_itoa(int nbr)
{
    char *str;
    int len;

    len = ft_length(nbr);
    if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len--] = '\0';
    if (nbr == 0)
    {
        str[0] = 48;
        return (str);
    }
    if (nbr < 0)
    {
        str[0] = '-';
        nbr *= -1;
    }
    while (nbr > 0)
    {
        str[len--] = 48 + (nbr % 10);
        nbr /= 10;
    }
    return (str);
}