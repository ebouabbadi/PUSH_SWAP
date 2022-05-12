/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:28:39 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:45:27 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	initialisation1(t_list **stack_a)
{
	t_list	*lst;
	int		i;

	lst = *stack_a;
	i = 0;
	while (lst)
	{
		lst->i = i;
		lst->len = -1;
		lst->marck = 0;
		lst->index = 1;
		lst = lst->next;
		i++;
	}
}

void	initialisation2(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = *stack_a;
	lst_b = *stack_b;
	while (lst_a)
	{
		lst_a->spin = 0;
		lst_a->nbr_mv = 0;
		lst_a->index = 0;
		lst_a = lst_a->next;
	}
	while (lst_b)
	{
		lst_b->spin = 0;
		lst_b->nbr_mv = 0;
		lst_b->index = 0;
		lst_b = lst_b->next;
	}
}

void	initialisation3(t_list **stack_a)
{
	t_list	*lst_a;

	lst_a = *stack_a;
	while (lst_a)
	{
		lst_a->spin = 0;
		lst_a->nbr_mv = 0;
		lst_a = lst_a->next;
	}
}
