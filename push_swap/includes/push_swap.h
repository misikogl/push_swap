/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:18:45 by misikogl          #+#    #+#             */
/*   Updated: 2022/11/21 20:15:27 by misikogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "../libs/ft_printf/ft_printf.h"
# include "../libs/libft/libft.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	a_len;
	int	b_len;
}	t_stack;

void	rr(t_stack *stacks);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);

void	duplicate_control(t_stack *stack);
t_stack	*initialize(int count);
t_stack	*create_stacks(char **argv);
void	print_a(t_stack *stack);
int		count_words(char *str);
void	print_b(t_stack *stack);
int		ft_atoi2(char *str);
void	sort_two(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_four(t_stack *stack);
void	sort_five(t_stack *stack);

void	free_me_error(t_stack *stack);
void	exit_free(t_stack *stack);
void	free_them_all(t_stack *stack);
void	free_split(char **nums);

t_stack	*copy_stack_to_stack(t_stack *dest, t_stack *src);
t_stack	*bubble_sort(t_stack *stack);
void	radix_sort(t_stack *stack);
void	set_index(t_stack *stack, t_stack *sorted_stack);
int		check_is_sorted(t_stack *stack);
void	small_sort(t_stack *stack);
int		min_index(t_stack *stack);
int		check_order(t_stack *stack);
void	reverse_stack(t_stack *stack);
int		get_argc(char **argv);
void	error_and_exit(void);

#endif
