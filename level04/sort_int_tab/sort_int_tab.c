/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 08:25:59 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/14 09:25:07 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    sort_int_tab(int *tab, unsigned int size)
{
    int swap;
    unsigned int i;
    unsigned int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {  
            if (tab[i] < tab[j])
            {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
}