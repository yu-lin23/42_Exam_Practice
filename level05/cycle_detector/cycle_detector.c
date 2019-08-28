/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-lin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:15:46 by yu-lin            #+#    #+#             */
/*   Updated: 2019/08/28 10:23:23 by yu-lin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int     cycle_detector(const t_list *lst)
{
    t_list      *slow;
    t_list      *fast;

    slow = (t_list *)lst;
    fast = (t_list *)lst->next;
    while (fast && fast->next)
    {
        if (fast == slow)
            return (1)
        slow = slow->next;
        fast = fast->next->next;
    }
    return (0);
}