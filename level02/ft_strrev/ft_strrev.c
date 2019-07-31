/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 07:49:45 by yu-lin            #+#    #+#             */
/*   Updated: 2019/07/25 08:10:19 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
    int i;
    int len;
    char holder;

    i = 0;
    len = 0;
    while (str[len] != '\0')
        len++;
    len--;
    while (len > i)
    {
        holder = str[i];
        str[i] = str[len];
        str[len] = holder;
        len--;
        i++;
    }
    return (str);
}