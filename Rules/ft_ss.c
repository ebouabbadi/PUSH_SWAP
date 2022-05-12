/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:57:32 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 17:02:13 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_a;
	t_list	*second_a;
	t_list	*third;
	t_list	*first_b;
	t_list	*second_b;

	first_a = *stack_a;
	second_a = first_a->next;
	third = second_a->next;
	*stack_a = second_a;
	second_a->next = first_a;
	first_a->next = third;
	first_b = *stack_b;
	second_b = first_b->next;
	third = second_b->next;
	*stack_b = second_b;
	second_b->next = first_b;
	first_b->next = third;
	write(1, "ss\n", 3);
}
