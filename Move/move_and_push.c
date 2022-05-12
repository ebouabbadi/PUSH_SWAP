/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_and_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:08:33 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:11:43 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_list	*top(t_list **stack_b)
{
	t_list	*min;
	t_list	*lst;

	lst = *stack_b;
	min = *stack_b;
	while (lst && lst->next)
	{
		if (lst->next->index < min->index)
			min = lst->next;
		lst = lst->next;
	}
	return (min);
}

void	move_and_push(t_list **stack_a, t_list **stack_b)
{
	t_list	*tp;

	while (*stack_b != NULL)
	{
		move_stack(stack_a, stack_b);
		tp = top(stack_b);
		if (tp->spin == 0 && tp->pos->spin == 0)
			ft_sort1(tp, stack_a, stack_b);
		else if (tp->spin == 1 && tp->pos->spin == 1)
			ft_sort2(tp, stack_a, stack_b);
		else if (tp->spin == 1 && tp->pos->spin == 0)
			ft_sort3(tp, stack_a, stack_b);
		else if (tp->spin == 0 && tp->pos->spin == 1)
			ft_sort4(tp, stack_a, stack_b);
		ft_pa(stack_b, stack_a);
	}
}
