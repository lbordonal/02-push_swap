/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:16:53 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/23 18:39:06 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	selection_sort(t_stack *stack_a, t_stack *stack_b)
{
	fill_index(stack_a);
	find_top_mid_bottom(stack_a);
	if (stack_a->len == 2)
		ft_sort_two(stack_a);
	else if (stack_a->len == 3)
		ft_sort_three(stack_a);
	else if (stack_a->len == 5)
		ft_sort_five(stack_a, stack_b);
	else if (stack_a->len == 10)
		ft_crazy_sort(stack_a, stack_b);
	else
		ft_sort(stack_a, stack_b);
}

void	find_top_mid_bottom(t_stack *stack)
{
	int	i;
	int	len;

	i = 0;
	len = stack->len;
	while (stack->index[i] != 0)
		i++;
	stack->top = stack->stack[i];
	i = 0;
	while (stack->index[i] != (len - 1))
		i++;
	stack->bottom = stack->stack[i];
	if (len % 2 == 0)
		stack->mid = len / 2;
	else
		stack->mid = (len - 1) / 2;
}

void	pushback_to_a(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_b->len > 0)
		pa(stack_a, stack_b);
}

void	double_pb_and_sort(t_stack *stack_a, t_stack *stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	ft_sort_two_reverse(stack_b);
	ft_sort_three(stack_a);
}

void	rra_pa_ra_ra(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	pa(stack_a, stack_b);
	ra(stack_a);
	ra(stack_a);
}
