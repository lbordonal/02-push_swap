/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:13:36 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/22 18:40:19 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_talisca(t_stack *stack)
{
	int	i;
	int	j;
	int	messi;

	i = 0;
	while (i < stack->len)
	{
		j = 0;
		messi = 0;
		while (j < stack->len)
		{
			if (stack->stack[j] < stack->stack[i])
				messi++;
			j++;
		}
		stack->finalpos[i] = messi;
		i++;
	}
}

void	ft_marquinhos(t_stack *stack_a, t_stack *stack_b)
{
	int	bigger_index;
	int	i;

	bigger_index = stack_a->len - 1;
	i = bigger_index + 1;
	while (i > 0)
	{
		if (stack_a->finalpos[0] == bigger_index)
		{
			pb(stack_a, stack_b);
			bigger_index--;
		}
		else if (stack_a->stack[0] < stack_a->stack[1])
			ra(stack_a);
		else if (stack_a->stack[0] > stack_a->stack[1])
		{
			sa(stack_a);
			ra(stack_a);
		}
		i = stack_a->len;
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
			if (((stack_a->finalpos[0] >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		pushback_to_a(stack_a, stack_b);
		i++;
	}
}
