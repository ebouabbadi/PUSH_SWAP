/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:37:05 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:20:57 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_list **stack_b, t_list **stack_a)
{
	t_list	*node;

	node = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, node);
	write(1, "pa\n", 3);
}
