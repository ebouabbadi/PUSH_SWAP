/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:53:34 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:25:54 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*last_a;
	t_list	*lst_a;
	t_list	*last_b;
	t_list	*lst_b;

	lst_a = *stack_a;
	while (lst_a->next->next)
		lst_a = lst_a->next;
	last_a = lst_a->next;
	lst_a->next = NULL;
	ft_lstadd_front(stack_a, last_a);
	lst_b = *stack_b;
	while (lst_b->next->next)
		lst_b = lst_b->next;
	last_b = lst_b->next;
	lst_b->next = NULL;
	ft_lstadd_front(stack_b, last_b);
	write(1, "rrr\n", 4);
}
