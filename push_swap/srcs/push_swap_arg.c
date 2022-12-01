/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:46:10 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/22 11:42:10 by misikogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi2(char *str)
{
	int		i;
	long	res;
	int		neg;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if ((str[i] == '-' || str[i] == '+') && str[i + 1] == 0)
			error_and_exit();
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	if (str[i] && !(str[i] >= '0' && str[i] <= '9'))
		error_and_exit();
	if ((res * neg) > 2147483647 || (res * neg) < -2147483648)
		error_and_exit();
	return (res * neg);
}

t_stack	*initialize(int count)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->a_len = count;
	stack->b_len = 0;
	stack->a = (int *)malloc(sizeof(int) * stack->a_len);
	stack->b = (int *)malloc(sizeof(int) * stack->a_len);
	return (stack);
}

int	get_argc(char **argv)
{
	char	**nums;
	int		i;
	int		j;
	int		count;

	i = 1;
	count = 0;
	while (argv[i])
	{
		nums = ft_split(argv[i]);
		j = 0;
		while (nums[j])
		{
			j++;
			count++;
		}
		free_split(nums);
		i++;
	}
	return (count);
}

t_stack	*create_stacks(char **argv)
{
	t_stack	*stack;
	char	**nums;
	int		y;
	int		i;
	int		j;

	stack = initialize(get_argc(argv));
	i = 1;
	y = 0;
	while (y < stack->a_len)
	{
		nums = ft_split(argv[i]);
		j = 0;
		if (nums[j] == NULL)
			error_and_exit();
		while (nums[j])
		{
			stack->a[y] = ft_atoi2(nums[j]);
			y++;
			j++;
		}
		free_split(nums);
		i++;
	}
	return (stack);
}
