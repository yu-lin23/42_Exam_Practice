/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 21:42:06 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/08 07:59:07 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (i == 0)
        {
            if (str[0] >= 'a' && str[0] <= 'z')
                str[0] -= 32;
        }
        else if (str[i - 1] == ' ' || str[i - 1] == '\t')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    write(1, str, i);
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    int i;

    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < ac)
        {
            str_capitalizer(av[i]);
            i++;
        }
    }
    return (0);
}