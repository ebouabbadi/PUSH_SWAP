/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_stack_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 06:50:02 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:33:09 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	trouve(t_list **stack_a)
{
	t_list	*lst;

	lst = *stack_a;
	while (lst)
	{
		if (lst->marck == 0)
			return (1);
		lst = lst->next;
	}
	return (0);
}

void	add_stack_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst;

	lst = *stack_a;
	while (trouve(stack_a))
	{
		if (lst->marck == 0)
		{
			while ((*stack_a) != lst)
				ft_ra(stack_a);
			ft_pb(stack_a, stack_b);
			lst = *stack_a;
		}
		else
			lst = lst->next;
	}
}
