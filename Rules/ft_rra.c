/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 07:05:33 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:24:14 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_list **stack)
{
	t_list	*last;
	t_list	*lst;

	lst = *stack;
	while (lst->next->next)
		lst = lst->next;
	last = lst->next;
	lst->next = NULL;
	ft_lstadd_front(stack, last);
	write(1, "rra\n", 4);
}
