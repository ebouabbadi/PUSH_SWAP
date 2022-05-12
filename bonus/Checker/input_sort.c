/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 02:23:55 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/30 16:00:55 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	input_sort(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strncmp(str, "sa\n", 3))
		ft_sa(stack_a);
	else if (!ft_strncmp(str, "sb\n", 3))
		ft_sb(stack_b);
	else if (!ft_strncmp(str, "ss\n", 3))
		ft_ss(stack_a, stack_b);
	else if (!ft_strncmp(str, "pa\n", 3))
		ft_pa(stack_b, stack_a);
	else if (!ft_strncmp(str, "pb\n", 3))
		ft_pb(stack_a, stack_b);
	else if (!ft_strncmp(str, "ra\n", 3))
		ft_ra(stack_a);
	else if (!ft_strncmp(str, "rb\n", 3))
		ft_rb(stack_b);
	else if (!ft_strncmp(str, "rr\n", 3))
		ft_rr(stack_a, stack_b);
	else if (!ft_strncmp(str, "rra\n", 4))
		ft_rra(stack_a);
	else if (!ft_strncmp(str, "rrb\n", 4))
		ft_rrb(stack_b);
	else if (!ft_strncmp(str, "rrr\n", 4))
		ft_rrr(stack_a, stack_b);
	else
		print_error();
}
