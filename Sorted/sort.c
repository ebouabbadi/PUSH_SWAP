/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:11:46 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:36:13 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort1(t_list *tp, t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	min;

	i = 0;
	if (tp->nbr_mv < tp->pos->nbr_mv)
		min = tp->nbr_mv;
	else
		min = tp->pos->nbr_mv;
	while (i < min)
	{
		ft_rr(stack_a, stack_b);
		i++;
	}
	while (tp->nbr_mv > i)
	{
		ft_rb(stack_b);
		i++;
	}
	while (tp->pos->nbr_mv > i)
	{
		ft_ra(stack_a);
		i++;
	}
}

void	ft_sort2(t_list *tp, t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	min;

	i = 0;
	if (tp->nbr_mv < tp->pos->nbr_mv)
		min = tp->nbr_mv;
	else
		min = tp->pos->nbr_mv;
	while (i < min)
	{
		ft_rrr(stack_a, stack_b);
		i++;
	}
	while (tp->nbr_mv > i)
	{
		ft_rrb(stack_b);
		i++;
	}
	while (tp->pos->nbr_mv > i)
	{
		ft_rra(stack_a);
		i++;
	}
}

void	ft_sort3(t_list *tp, t_list **stack_a, t_list **stack_b)
{
	while (tp->nbr_mv > 0)
	{
		ft_rrb(stack_b);
		tp->nbr_mv--;
	}
	while (tp->pos->nbr_mv > 0)
	{
		ft_ra(stack_a);
		tp->pos->nbr_mv--;
	}
}

void	ft_sort4(t_list *tp, t_list **stack_a, t_list **stack_b)
{
	while (tp->nbr_mv > 0)
	{
		ft_rb(stack_b);
		tp->nbr_mv--;
	}
	while (tp->pos->nbr_mv > 0)
	{
		ft_rra(stack_a);
		tp->pos->nbr_mv--;
	}
}
