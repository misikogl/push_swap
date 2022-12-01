/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:41:51 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/21 17:59:30 by misikogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	radix_sort(t_stack *stack)
{
	int	i;
	int	len;
	int	num;

	i = 0;
	len = 0;
	while (!check_is_sorted(stack))
	{
		len = stack->a_len;
		while (len--)
		{
			num = stack->a[stack->a_len - 1];
			if ((num >> i) & 1)
				ra(stack);
			else
				pb(stack);
		}
		i++;
		while (stack->b_len)
			pa(stack);
	}
}

int	check_is_sorted(t_stack *stack)
{
	t_stack	*sorted_stack;
	int		i;

	sorted_stack = bubble_sort(stack);
	reverse_stack(sorted_stack);
	i = 0;
	while (i < stack->a_len)
	{
		if (stack->a[i] != sorted_stack->a[i])
		{
			free_them_all(sorted_stack);
			return (0);
			break ;
		}
		i++;
	}
	free_them_all(sorted_stack);
	return (1);
}

t_stack	*bubble_sort(t_stack *stack)
{
	t_stack	*sorted_stack;
	int		step;
	int		i;
	int		temp;

	sorted_stack = NULL;
	sorted_stack = copy_stack_to_stack(sorted_stack, stack);
	step = 0;
	while (step < sorted_stack->a_len)
	{
		i = 0;
		step++;
		while (i <= sorted_stack->a_len - step - 1)
		{
			if (sorted_stack->a[i] > sorted_stack->a[i + 1])
			{
				temp = sorted_stack->a[i];
				sorted_stack->a[i] = sorted_stack->a[i + 1];
				sorted_stack->a[i + 1] = temp;
			}
			i++;
		}
	}
	return (sorted_stack);
}

t_stack	*copy_stack_to_stack(t_stack *dest, t_stack *src)
{
	int	i;

	dest = (t_stack *)malloc(sizeof(t_stack));
	dest->a_len = src->a_len;
	dest->b_len = 0;
	dest->a = (int *)malloc(sizeof(int) * dest->a_len);
	i = 0;
	while (i < src->a_len)
	{
		dest->a[i] = src->a[i];
		i++;
	}
	return (dest);
}
