/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:30:08 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 16:45:01 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_rrb(t_list **stack)
{
	t_list	*last;
	t_list	*lst;

	lst = *stack;
	while (lst->next->next)
		lst = lst->next;
	last = lst->next;
	lst->next = NULL;
	ft_lstadd_front(stack, last);
	write(1, "rrb\n", 4);
}
