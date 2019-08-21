/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:06:52 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/21 13:39:43 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     main(int ac, char **av)
{
    if (ac != 2)
        printf("\n");
    else
    {
        int i;
        int nbr;

        i = 1;
        nbr = atoi(av[1]);
        if (nbr == 1)
            printf("1");
        while (nbr >= i)
        {
            i++;
            if (nbr % i == 0)
            {
                printf("%d", i);
                if (nbr == i)
                    break;
                printf("*");
                nbr /= i;
                i = 1;
            }
        }
        printf("\n");
    }
    return (0);
    
}