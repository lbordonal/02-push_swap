/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:13:36 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/01 16:23:13 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_index(t_stack *stack)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	while (i < stack->len)
	{
		j = 0;
		index = 0;
		while (j < stack->len)
		{
			if (stack->stack[j] < stack->stack[i])
				index++;
			j++;
		}
		stack->index[i] = index;
		i++;
	}
}

void	ft_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;
	int	size_a;
	int	max_bits;

	i = 0;
	max_bits = 0;
	find_top_mid_bottom(stack_a);
	while ((stack_a->bottom >> max_bits) != 0)
		max_bits++;
	while (i <= max_bits)
	{
		size_a = stack_a->len;
		j = 0;
		while (j < size_a)
		{
			if (((stack_a->index[0] >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		pushback_to_a(stack_a, stack_b);
		//pushback_to_a_but_smart(stack_a, stack_b, i);
		i++;
	}
}

/* void	pushback_to_a_but_smart(t_stack *stack_a, t_stack *stack_b, int	shift)
{
	int	i;
	int	size_b;

	i = 0;
	fill_index(stack_b);
	size_b = stack_b->len;
	while (i < size_b && stack_b->len > 0)
	{
		if (((stack_b->index[0] & (1 << (shift + 1))) == 0))
			rb(stack_b);
		else
			pa(stack_a, stack_b);
		i++;
	}
} */
