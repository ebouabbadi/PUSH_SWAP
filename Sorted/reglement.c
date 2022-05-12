/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   reglement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:23:18 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:35:17 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reglement(t_list **stack_a)
{
	t_list	*lst;
	t_list	*min;

	lst = *stack_a;
	initialisation3(&lst);
	ft_spin_stack(&lst);
	min = position(lst);
	nbr_move(lst);
	if (min->spin == 1)
	{
		while (min->nbr_mv > 0)
		{
			ft_rra(stack_a);
			min->nbr_mv--;
		}
	}
	else
	{
		while (min->nbr_mv > 0)
		{
			ft_ra(stack_a);
			min->nbr_mv--;
		}
	}
}
