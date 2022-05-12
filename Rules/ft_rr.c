/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:45:31 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:23:13 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_a;
	t_list	**lst_a;
	t_list	*first_b;
	t_list	**lst_b;

	first_a = *stack_a;
	first_b = *stack_b;
	(*stack_a) = (*stack_a)->next;
	(*stack_b) = (*stack_b)->next;
	first_a->next = NULL;
	first_b->next = NULL;
	lst_a = stack_a;
	lst_b = stack_b;
	ft_lstadd_back(lst_a, first_a);
	ft_lstadd_back(lst_b, first_b);
	write(1, "rr\n", 3);
}
