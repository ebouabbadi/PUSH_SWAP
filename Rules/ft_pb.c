/* ************************************************************************** */
/*		                                                                      */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 06:30:40 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:21:24 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*node;

	node = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, node);
	write(1, "pb\n", 3);
}
