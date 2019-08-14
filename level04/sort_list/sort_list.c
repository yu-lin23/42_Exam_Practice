/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:07:02 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/14 08:22:25 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void  swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

int     ascending(int a, int b)
{
    return (a <= b);
}

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    int     overflow;
    t_list  *teleport;

    teleport = lst;
    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap(&lst->data, &lst->next->data);
            lst = teleport;
        }
        else
        {
            lst = lst->next;
        }
        lst = teleport;
    }
    return (lst);
}

int main(void)
{
    t_list *lst;

    lst = (t_list*)malloc(sizeof(t_list));
    lst->data = 20;
    lst->next = (t_list*)malloc(sizeof(t_list));
    lst->next->data = 10;
    lst->next->next = (t_list*)malloc(sizeof(t_list));
    lst->next->next->data = 0;
    lst->next->next->next = NULL;

    lst = sort_list(lst, ascending);
    while  (lst != NULL)
    {
        printf("%d\n", lst->data);
        lst = lst->next;
    }
    return (0);
}