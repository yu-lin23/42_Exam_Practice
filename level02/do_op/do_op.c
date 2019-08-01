/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 14:25:14 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/01 08:13:40 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac != 4)
        write(1, "\n", 1);
    else
    {
        int n1;
        int n2;
        int result;
        n1 = atoi(av[1]);
        n2 = atoi(av[3]);
        result = 0;
        if (av[2][0] == '+')
            result = n1 + n2;
        else if (av[2][0] == '-')
            result = n1 - n2;
        else if (av[2][0] == '*')
            result = n1 * n2;
        else if (av[2][0] == '/')
            result = n1 / n2;
        else if (av[2][0] == '%')
            result = n1 % n2;
        printf("%d\n", result);
        return (0);
    }
    
}