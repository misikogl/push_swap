/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:05:01 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/21 18:17:04 by misikogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stack)
{
	stack->b_len = stack->b_len - 1;
	stack->a[stack->a_len] = stack->b[stack->b_len];
	stack->a_len = stack->a_len + 1;
	ft_printf("pa\n");
}

void	pb(t_stack *stack)
{
	stack->a_len = stack->a_len - 1;
	stack->b[stack->b_len] = stack->a[stack->a_len];
	stack->b_len = stack->b_len + 1;
	ft_printf("pb\n");
}
