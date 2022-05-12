/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:27:38 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:22:35 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_list **stack)
{
	t_list	*first;
	t_list	**lst;

	first = *stack;
	(*stack) = (*stack)->next;
	first->next = NULL;
	lst = stack;
	ft_lstadd_back(lst, first);
	write(1, "rb\n", 3);
}
