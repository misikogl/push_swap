/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 06:43:20 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/21 17:44:00 by misikogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	small_sort(t_stack *stack)
{
	if ((stack->a_len) == 2)
		sort_two(stack);
	if ((stack->a_len) == 3)
		sort_three(stack);
	if ((stack->a_len) == 4)
		sort_four(stack);
	if ((stack->a_len) == 5)
		sort_five(stack);
}

void	sort_two(t_stack *stack)
{
	if (stack->a[0] < stack->a[1])
		sa(stack);
}

void	sort_three(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[2] > stack->a[0])
		ra(stack);
	else if (stack->a[0] > stack->a[1] && stack->a[2] > stack->a[1])
		sa(stack);
	else if (stack->a[1] > stack->a[0] && stack->a[2] > stack->a[0] \
			&& stack->a[1] > stack->a[2])
		rra(stack);
	else if (stack->a[1] > stack->a[0] && stack->a[2] < stack->a[0])
	{
		rra(stack);
		sa(stack);
	}
	else if (stack->a[1] > stack->a[0] && stack->a[1] < stack->a[2])
	{
		ra(stack);
		sa(stack);
	}
}

void	sort_four(t_stack *stack)
{
	int	min_ind;

	min_ind = min_index(stack);
	if (min_ind == stack->a_len - 2)
	{
		sa(stack);
	}
	else if (min_ind == stack->a_len - 3)
	{
		rra(stack);
		rra(stack);
	}
	else if (min_ind == stack->a_len - 4)
		rra(stack);
	pb(stack);
	sort_three(stack);
	pa(stack);
}

void	sort_five(t_stack *stack)
{
	int	min_ind;

	min_ind = min_index(stack);
	if (min_ind == stack->a_len - 2)
		sa(stack);
	else if (min_ind == stack->a_len - 3)
	{
		ra(stack);
		ra(stack);
	}
	else if (min_ind == stack->a_len - 4)
	{
		rra(stack);
		rra(stack);
	}
	else if (min_ind == stack->a_len - 5)
		rra(stack);
	pb(stack);
	sort_four(stack);
	pa(stack);
}
