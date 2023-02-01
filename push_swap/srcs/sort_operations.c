/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:26:13 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/01 22:19:21 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_talisca(t_stack *stack) //atribui indice dependendo do valor
{
	int	i;
	int	j;
	int messi;

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

void	ft_marquinhos(t_stack *stack_a, t_stack *stack_b) //ordena os indices
{
	int	bigger_index;
	int	i;
	int	counter;

	bigger_index = stack_a->len - 1;
	i = bigger_index + 1;
	counter = 0;
	while (i > 0)
	{
		counter++;
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
	ft_printf("\n%s%d\n\n", "Operations: ", counter);
	ft_printf("%s\n", "stack_a:");
	ft_printstack(stack_a);
	ft_printf("\n%s\n", "stack_b:");
	ft_printstack(stack_b);
	ft_printf("\n");
}

void	ft_sort_three(t_stack *stack_a)
{
	int	*s;
	int	counter;

	counter = 1;
	s = stack_a->stack;
	if ((s[0] > s[1]) && (s[1] < s[2]) && (s[2] > s[0]))
		sa(stack_a);
	else if ((s[0] > s[1]) && (s[1] < s[2]) && (s[2] < s[0]))
		ra(stack_a);
	else if ((s[0] < s[1]) && (s[1] > s[2]) && (s[2] < s[0]))
		rra(stack_a);
	else if ((s[0] > s[1]) && (s[1] > s[2]) && (s[2] < s[0]))
	{
		sa(stack_a);
		rra(stack_a);
		counter = 2;
	}
	else if ((s[0] < s[1]) && (s[1] > s[2]) && (s[2] > s[0]))
	{
		sa(stack_a);
		ra(stack_a);
		counter = 2;
	}
	ft_printf("\n%s%d\n\n", "Operations: ", counter);
	ft_printf("%s\n", "stack_a:");
	ft_printstack(stack_a);
}

void	ft_sort_two(t_stack *stack_a)
{
	if (stack_a->stack[0] > stack_a->stack[1])
		sa(stack_a);
	ft_printf("\n%s%d\n\n", "Operations: ", 1);
	ft_printf("%s\n", "stack_a:");
	ft_printstack(stack_a);
}

void	ft_sort_five(t_stack *stack_a, t_stack *stack_b) //corrigir, estou usando ft_marquinhos dentro, nao pode passar de 12 moves
{
//	int	top_a; //menor valor em a depois do push_b
//	int	bottom_a; //maior valor em a depois do push_b
//	int	i;
	int	*a;
	int	*b;

	a = stack_a->stack;
	b = stack_b->stack;
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	ft_talisca(stack_a);
	ft_sort_two(stack_b);
	ft_sort_three(stack_a);

	if ((b[0] > a[2])) //b0 e b1 maiores que a2
	{
		pa(stack_a, stack_b);
		ra(stack_a);
		pa(stack_a, stack_b);
		ra(stack_a);
	}
	else if (b[1] < a[0]) //b0 e b1 menores que a0
	{
		rb(stack_b);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else if (b[0] < a[0])
	//ft_printf("\n%s%d\n\n", "Operations: ", counter);
	ft_printf("%s\n", "stack_a:");
	ft_printstack(stack_a);
	ft_printf("\n%s\n", "stack_b:");
	ft_printstack(stack_b);
	ft_printf("\n");
}

