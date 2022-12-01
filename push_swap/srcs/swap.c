/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:03:55 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/21 17:38:19 by misikogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stack)
{
	int	temp;

	if (stack->a_len > 1)
	{
		temp = stack->a[stack->a_len - 1];
		stack->a[stack->a_len - 1] = stack->a[stack->a_len - 2];
		stack->a[stack->a_len - 2] = temp;
		ft_printf("sa\n");
	}
}

void	sb(t_stack *stack)
{
	int	temp;

	if (stack->b_len > 1)
	{
		temp = stack->b[stack->b_len - 1];
		stack->b[stack->b_len - 1] = stack->b[stack->b_len - 2];
		stack->b[stack->b_len - 2] = temp;
		ft_printf("sb\n");
	}
}

void	ss(t_stack *stack)
{
	sa (stack);
	sb (stack);
}
