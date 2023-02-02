/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:26:13 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/02 12:55:54 by lbordona         ###   ########.fr       */
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
		operations++;;
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
		operations++;;
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

int	ft_sort_ten(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	operations;

	i = 0;
	operations = 0;
	(void)stack_b;
	ft_talisca(stack_a);
	//ft_printf("%d\n%d", stack_a->stack[0], stack_a->finalpos[0]);
	while (stack_a->len > 0)
	{
		while (stack_a->stack[i] != stack_a->finalpos[0])
		{
			//ft_printf("%d\n", stack_a->stack[i]);
			//ft_printf("%d\n", stack_a->finalpos[0]);
			ra(stack_a);
			operations++;
			i++;
		}
		ft_printf("%s%d\n","achei-> ", stack_a->stack[0]);
		pb(stack_a, stack_b);
		operations++;
		ft_printstack(stack_a);
		ft_printf("\n");
		ft_printstack(stack_b);
		ft_talisca(stack_a);
	}
	while (stack_b->len > 0)
	{
		pa(stack_a, stack_b);
		operations++;
	}
	ft_printstack(stack_a);
	return (operations);
}
