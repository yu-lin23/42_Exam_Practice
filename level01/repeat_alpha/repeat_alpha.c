/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:02:25 by yu-lin            #+#    #+#             */
/*   Updated: 2019/07/24 14:13:18 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int ac, char **av)
{
    int i;
    char j;
    if (ac == 2)
    {
       i = 0;
       while (av[1][i])
       {
           if (av[1][i] >= 'a' && av[1][i] <= 'z')
           {
               j = av[1][i];
               while (j >= 'a')
               {
                   ft_putchar(av[1][i]);
                   j--;
               }
           }
           else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
           {
               j = av[1][i];
                while (j >= 'A')
                {
                    ft_putchar(av[1][i]);
                    j--;
                }
            }
            else
                ft_putchar(av[1][i]);
            i++;
       } 
    }
    ft_putchar('\n');
}