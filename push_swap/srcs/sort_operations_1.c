/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:26:13 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/20 11:43:37 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_two(t_stack *stack_a)
{
	if (stack_a->stack[0] < stack_a->stack[1])
		sa(stack_a);
}

void	ft_sort_two_reverse(t_stack *stack_a)
{
	if (stack_a->stack[0] < stack_a->stack[1])
		sa(stack_a);
}

void	ft_sort_three(t_stack *stack_a)
{
	int	*s;

	s = stack_a->stack;
	if (s[0] < s[1] && s[1] < s[2] && s[2] > s[0])
		ft_printf("%s\n", "Already sorted (:");
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
	}
	else if ((s[0] < s[1]) && (s[1] > s[2]) && (s[2] > s[0]))
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	ft_sort_five(t_stack *stack_a, t_stack *stack_b)
{
	int	*a;
	int	*b;

	a = stack_a->stack;
	b = stack_b->stack;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	ft_sort_two_reverse(stack_b);
	ft_sort_three(stack_a);
	while (stack_b->len > 0)
	{
		if (b[0] < a[0])
				pa(stack_a, stack_b);
		else if (b[0] > a[0] && b[0] < a[1])
		{
			pa(stack_a, stack_b);
			sa(stack_a);
		}
		else if (b[0] > a[0] && b[0] > a[1] && b[0] < a[2])
		{
			rra(stack_a);
			pa(stack_a, stack_b);
			ra(stack_a);
			ra(stack_a);
		}
		else if (b[0] > a[2])
		{
			pa(stack_a, stack_b);
			ra(stack_a);
		}
	}
}

void	ft_crazy_sort(t_stack *stack_a, t_stack *stack_b)
{
	ft_talisca(stack_a);
	while (stack_a->len > 1)
	{
		if (stack_a->finalpos[0] == 0)
		{
			pb(stack_a, stack_b);
			ft_talisca(stack_a);
		}
		else
			ra(stack_a);
	}
	while (stack_b->len > 0)
		pa(stack_a, stack_b);
}
