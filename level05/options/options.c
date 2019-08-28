/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 10:47:50 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/28 15:24:14 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int i;
    int bits[32] = {0};
    int j;

    if (ac == 1)
    {
        write(1,"options: abcdefghijklmnopqrstuvwxyz\n", 36);
        return (0);
    }
    else
    {
        i = 1;
        while (i < ac)
        {
            j = 1;
            if (av[i][0] == '-')
            {
                while (av[i][j] && av[i][j] >= 'a' && av[i][j] <= 'z')
                {
                    if (av[i][j] == 'h')
                    {
                        write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36);
                        return (0);
                    }
                    bits['z' - av[i][j] + 6] = 1;
                    j++;
                }
                if (av[i][j])
                {
                    write(1, "Invalid Option\n", 15);
                    return (0);
                }
            }
            i++;
        }
        i = 0;
        while (i < 32)
        {
            bits[i] = 48 + bits[i];
            write(1, &bits[i++], 1);
            if (i == 32)
                write(1, "\n", 1);
            else if (i % 8 == 0)
                write(1, " ", 1);
        }
    }
    return (0);
}