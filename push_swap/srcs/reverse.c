/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:43:39 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/21 17:45:33 by misikogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *stack)
{
	int	i;
	int	temp;

	i = stack->a_len - 1;
	temp = stack->a[stack->a_len - 1];
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = temp;
	ft_printf("ra\n");
}

void	rb(t_stack *stack)
{
	int	i;
	int	temp;

	i = stack->b_len - 1;
	temp = stack->b[stack->b_len - 1];
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = temp;
	ft_printf("rb\n");
}

void	rr(t_stack *stacks)
{
	ra(stacks);
	rb(stacks);
}
