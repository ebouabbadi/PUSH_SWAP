/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 17:06:07 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 17:13:04 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_list **stack_a, t_list **stack_b)
{
	while (*stack_a)
	{
		free(*stack_a);
		*stack_a = (*stack_a)->next;
	}
	free(stack_a);
	while (*stack_b)
	{
		free(*stack_b);
		*stack_b = (*stack_b)->next;
	}
	free(stack_b);
}
