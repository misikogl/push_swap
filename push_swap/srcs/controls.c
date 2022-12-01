/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:28:44 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/21 18:22:09 by misikogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_stack(t_stack *stack)
{
	int	temp;
	int	len_stack;
	int	i;

	len_stack = stack->a_len;
	i = 0;
	while (i < len_stack / 2)
	{
		temp = stack->a[i];
		stack->a[i] = stack->a[len_stack - i - 1];
		stack->a[len_stack - i - 1] = temp;
		i++;
	}
}

void	duplicate_control(t_stack *stack)
{
	int	current_number;
	int	i;
	int	j;

	i = 0;
	while (i < stack->a_len)
	{
		current_number = stack->a[i];
		j = i + 1;
		while (j < stack->a_len)
		{
			if (current_number == stack->a[j])
				error_and_exit();
			j++;
		}
		i++;
	}
}

int	min_index(t_stack *stack)
{
	int	i;
	int	min;
	int	min_index;

	i = stack->a_len - 1;
	min = stack->a[i];
	while (i >= 0)
	{
		if (min >= stack->a[i])
		{
			min = stack->a[i];
			min_index = i;
		}
		i--;
	}
	return (min_index);
}
