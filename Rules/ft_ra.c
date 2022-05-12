/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:40:24 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:21:55 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_list **stack)
{
	t_list	*first;
	t_list	**lst;

	first = *stack;
	(*stack) = (*stack)->next;
	first->next = NULL;
	lst = stack;
	ft_lstadd_back(lst, first);
	write(1, "ra\n", 3);
}
