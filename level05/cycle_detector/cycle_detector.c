/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:15:46 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/28 15:41:02 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int     cycle_detector(const t_list *list)
{
    t_list      *slow;
    t_list      *fast;

    slow = (t_list *)list;
    fast = (t_list *)list->next;
    while (fast && fast->next)
    {
        if (fast == slow)
            return (1)
        slow = slow->next;
        fast = fast->next->next;
    }
    return (0);
}