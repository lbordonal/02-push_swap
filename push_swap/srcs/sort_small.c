/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:43:37 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/29 18:13:59 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_two_a(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack);
}

void	ft_sort_two_b(t_stack *stack)
{
	if (stack->stack_b[0] > stack->stack_b[1])
		sb(stack);
}

void	ft_sort_three(t_stack *stack)
{
	int	*a;

	a = stack->stack_a;
	if (stack_sorted_a(stack) == 0)
	{
		if ((a[0] > a[1]) && (a[1] < a[2]) && (a[2] > a[0]))
			sa(stack);
		else if ((a[0] > a[1]) && (a[1] < a[2]) && (a[2] < a[0]))
			ra(stack);
		else if ((a[0] < a[1]) && (a[1] > a[2]) && (a[2] < a[0]))
			rra(stack);
		else if ((a[0] > a[1]) && (a[1] > a[2]) && (a[2] < a[0]))
		{
			sa(stack);
			rra(stack);
		}
		else if ((a[0] < a[1]) && (a[1] > a[2]) && (a[2] > a[0]))
		{
			sa(stack);
			ra(stack);
		}
	}
}

void	ft_sort_five(t_stack *stack)
{
	int	*a;
	int	*b;

	a = stack->stack_a;
	b = stack->stack_b;
	double_pb_and_sort(stack);
	while (stack->len_b > 0)
	{
		if (b[0] < a[0])
			pa(stack);
		else if (b[0] > a[0] && b[0] < a[1])
		{
			pa(stack);
			sa(stack);
		}
		else if (b[0] > a[0] && b[0] > a[1] && b[0] < a[2])
			rra_pa_ra_ra(stack);
		else if (b[0] > a[2])
		{
			pa(stack);
			ra(stack);
		}
	}
}
