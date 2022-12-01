/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rereverse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:14:44 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/21 17:47:08 by misikogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->a[0];
	while (i < stack->a_len - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[stack->a_len - 1] = temp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->b[0];
	while (i < stack->b_len - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->b[stack->b_len - 1] = temp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
