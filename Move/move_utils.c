/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:01:57 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 15:20:03 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_spin_stack(t_list **stack)
{
	int		i;
	int		j;
	t_list	*lst;

	i = 0;
	j = 1;
	lst = *stack;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	if (i % 2 == 0)
		i = i / 2;
	else
		i = i / 2 + 1;
	lst = *stack;
	while (lst)
	{
		if (i < j)
			lst->spin = 1;
		lst = lst->next;
		j++;
	}
}

void	zero(t_list *tmp)
{
	int	k;

	k = 0;
	while (tmp)
	{
		tmp->nbr_mv = k;
		if (tmp->spin == 0)
			k++;
		else
			k--;
		tmp = tmp->next;
	}
}

void	one(t_list *tmp)
{
	int	k;

	k = 0;
	while (tmp)
	{
		if (tmp->spin == 0)
		{
			tmp->nbr_mv = k;
			k++;
		}
		else
		{
			k--;
			tmp->nbr_mv = k;
		}
		tmp = tmp->next;
	}
}

int	big(t_list *stack_a, t_list *lst_b)
{
	t_list	*lst_a;

	lst_a = stack_a;
	while (lst_a)
	{
		if (lst_b->content < lst_a->content)
			return (1);
		lst_a = lst_a->next;
	}
	return (0);
}

int	small(t_list *stack_a, t_list *lst_b)
{
	t_list	*lst_a;

	lst_a = stack_a;
	while (lst_a)
	{
		if (lst_b->content > lst_a->content)
			return (1);
		lst_a = lst_a->next;
	}
	return (0);
}
