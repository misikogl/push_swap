/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:23:29 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/22 14:04:43 by misikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	set_index(t_stack *stack, t_stack *sorted_stack)
{
	int		i;
	int		j;

	i = 0;
	while (i < stack->a_len)
	{
		j = -1;
		while (++j < stack->a_len)
		{
			if (stack->a[i] == sorted_stack->a[j])
			{
				stack->a[i] = j;
				break ;
			}	
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*sorted_stack;

	stack = create_stacks(argv);
	sorted_stack = NULL;
	sorted_stack = bubble_sort(stack);
	set_index(stack, sorted_stack);
	duplicate_control(stack);
	reverse_stack(stack);
	if (check_is_sorted(stack) || get_argc(argv) < 2 || argc < 1)
		exit(1);
	if (get_argc(argv) <= 5)
		small_sort(stack);
	else
		radix_sort(stack);
	exit_free(stack);
}
