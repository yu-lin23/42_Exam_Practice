/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:39:54 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/07 20:48:11 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int found;

    if (ac != 3)
        write(1, "\n", 1);
    else
    {
        i = 0;
        j = 0;
        found = 0;
        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    found++;
                    j++;
                    break;
                }
                j++;
            }
            i++;
            if (av[2][j] == '\0')
                break;
        }
        if (i == found)
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    return (0);
}