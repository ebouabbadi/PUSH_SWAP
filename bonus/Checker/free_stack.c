/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 02:31:23 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 16:00:13 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
