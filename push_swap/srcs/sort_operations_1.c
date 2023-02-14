/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:26:13 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/14 18:40:44 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sort_two(t_stack *stack_a)
{
	int	operations;

	operations = 0;
	if (stack_a->stack[0] < stack_a->stack[1])
	{
		sa(stack_a);
		operations++;
	}
	return (operations);
}

int	ft_sort_two_reverse(t_stack *stack_a)
{
	int	operations;

	operations = 0;
	if (stack_a->stack[0] < stack_a->stack[1])
	{
		sa(stack_a);
		operations++;
	}
	return (operations);
}

int	ft_sort_three(t_stack *stack_a)
{
	int	*s;
	int	operations;

	operations = 1;
	s = stack_a->stack;
	if (s[0] < s[1] && s[1] < s[2] && s[2] > s[0])
		operations = 0;
	else if ((s[0] > s[1]) && (s[1] < s[2]) && (s[2] > s[0]))
		sa(stack_a);
	else if ((s[0] > s[1]) && (s[1] < s[2]) && (s[2] < s[0]))
		ra(stack_a);
	else if ((s[0] < s[1]) && (s[1] > s[2]) && (s[2] < s[0]))
		rra(stack_a);
	else if ((s[0] > s[1]) && (s[1] > s[2]) && (s[2] < s[0]))
	{
		sa(stack_a);
		rra(stack_a);
		operations = 2;
	}
	else if ((s[0] < s[1]) && (s[1] > s[2]) && (s[2] > s[0]))
	{
		sa(stack_a);
		ra(stack_a);
		operations = 2;
	}
	return (operations);
}

int	ft_sort_five(t_stack *stack_a, t_stack *stack_b)
{
	int	*a;
	int	*b;
	int	operations;

	a = stack_a->stack;
	b = stack_b->stack;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	operations = 2;
	operations += ft_sort_two_reverse(stack_b);
	operations += ft_sort_three(stack_a);
	while (stack_b->len > 0)
	{
		if (b[0] < a[0])
		{
			pa(stack_a, stack_b);
			operations++;
		}
		else if (b[0] > a[0] && b[0] < a[1])
		{
			pa(stack_a, stack_b);
			sa(stack_a);
			operations += 2;
		}
		else if (b[0] > a[0] && b[0] > a[1] && b[0] < a[2])
		{
			rra(stack_a);
			pa(stack_a, stack_b);
			ra(stack_a);
			ra(stack_a);
			operations += 4;
		}
		else if (b[0] > a[2])
		{
			pa(stack_a, stack_b);
			ra(stack_a);
			operations += 2;
		}
	}
	return (operations);
}

int	ft_crazy_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	operations;

	operations = 0;
	ft_talisca(stack_a);
	while (stack_a->len > 1)
	{
		if (stack_a->finalpos[0] == 0)
		{
			pb(stack_a, stack_b);
			ft_talisca(stack_a);
			operations++;
		}
		else
		{
			ra(stack_a);
			operations++;
		}
	}
	while (stack_b->len > 0)
	{
		pa(stack_a, stack_b);
		operations++;
	}
	return (operations);
}
