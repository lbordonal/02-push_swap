/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:13:36 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/14 19:17:57 by lbordona         ###   ########.fr       */
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

int	ft_marquinhos(t_stack *stack_a, t_stack *stack_b)
{
	int	bigger_index;
	int	i;
	int	operations;

	bigger_index = stack_a->len - 1;
	i = bigger_index + 1;
	operations = 0;
	while (i > 0)
	{
		operations++;
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
	return (operations);
}

int	ft_sort_10(t_stack *stack_a, t_stack *stack_b)
{
	int	top;
	int	bottom;
	int	middle;
	int	len;
	int	operations;
	int	i;

	i = 0;
	operations = 0;
	ft_talisca(stack_a);
	len = stack_a->len;
	top = stack_a->finalpos[len - 1];
	bottom = stack_a->finalpos[0];
	middle = stack_a->finalpos[find_middle(stack_a)];
	while (stack_a->finalpos[i] >= stack_a->finalpos[middle])
	{
		pb(stack_a, stack_b);
		i++;
	}

/* 	ft_printf("%s%d%s%d\n\n", "Value top = ", top, "Pos = ", len);
	ft_printf("%s%d%s\n\n", "Value bottom = ", bottom, "Pos = 0");
	ft_printf("%s%d%s%d\n\n", "Value middle = ", middle, "Pos = ", find_middle(stack_a)); */
	return (operations);
}

int	ft_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;
	int	operations;
	int	top;
	int	size;
	int	max_num;
	int	max_bits;

	i = 0;
	j = 0;
	operations = 0;
	ft_talisca(stack_a);
	top = stack_a->finalpos[0];
	size = stack_a->len;
	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		while (j < size)
		{
			if (((top >> i) & 1) == 1)
			{
				ra(stack_a);
				operations++;
			}
			else
			{
				pb(stack_a, stack_b);
				operations++;
			}
			j++;
		}
		i++;
	}
	while (stack_b->len > 0)
	{
		pa(stack_a, stack_b);
		operations++;
	}
	return (operations);
}
