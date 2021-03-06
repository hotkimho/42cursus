/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_optimization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:20:24 by hkim2             #+#    #+#             */
/*   Updated: 2022/04/04 19:53:38 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	a_exec_three_sort(t_stack **a, t_stack **b)
{
	if (check_ascending((*a)->next, 3))
		return ;
	pb(b, a);
	if (get_stack_size(*a) == 3)
		a_three_optimize_sort(a);
	else
		a_check_three(a, b);
	pa(a, b);
}

void	a_exec_four_sort(t_stack **a, t_stack **b)
{
	if (check_ascending((*a)->next, 4))
		return ;
	pb(b, a);
	a_four_optimize_sort(a, b);
	pa(a, b);
}

void	a_three_optimize_sort(t_stack **a)
{
	if (check_ascending(*a, 3))
		return ;
	if ((*a)->data == get_max_data(*a, 3))
	{
		ra(a);
		if (!check_ascending(*a, 3))
			sa(a);
	}
	else if ((*a)->next->data == get_max_data(*a, 3))
	{
		if ((*a)->data < (*a)->next->next->data)
		{
			sa(a);
			ra(a);
		}
		else
			rra(a);
	}
	else
		if (!check_ascending(*a, 3))
			sa(a);
	return ;
}

void	a_four_optimize_sort(t_stack **a, t_stack **b)
{
	if ((*a)->data == get_min_data(*a, 4))
		a_exec_three_sort(a, b);
	else if ((*a)->next->data == get_min_data(*a, 4))
	{
		sa(a);
		a_exec_three_sort(a, b);
	}
	else if ((*a)->next->next->data == get_min_data(*a, 4))
	{
		ra(a);
		sa(a);
		a_exec_three_sort(a, b);
	}
	else
	{
		rra(a);
		a_exec_three_sort(a, b);
	}
}

void	a_five_optimize_sort(t_stack **a, t_stack **b)
{
	if ((*a)->data == get_min_data(*a, 5))
		a_exec_four_sort(a, b);
	else if ((*a)->next->data == get_min_data(*a, 5))
	{
		sa(a);
		a_exec_four_sort(a, b);
	}
	else if ((*a)->next->next->data == get_min_data(*a, 5))
	{
		exec_num_ra(a, 2);
		a_exec_four_sort(a, b);
	}
	else if ((*a)->next->next->next->data == get_min_data(*a, 5))
	{
		rra(a);
		rra(a);
		a_exec_four_sort(a, b);
	}
	else
	{
		rra(a);
		a_exec_four_sort(a, b);
	}
}
