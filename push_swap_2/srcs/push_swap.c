/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:50:46 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/30 12:29:21 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_start_stacks(t_stack *stack, int len)
{
	stack->stack_a = ft_calloc(len, sizeof(int));
	stack->stack_b = ft_calloc(len, sizeof(int));
	stack->len_a = 0;
	stack->len_b = 0;
	stack->bottom = 0;
	stack->top = 0;
}

void	ft_fill_stack(int argc, char **argv, t_stack *stack)
{
	int			i;
	long int	number;

	i = 0;
	stack->len_a = argc - 1;
	while (i < stack->len_a)
	{
		number = ft_atol(argv[i + 1]);
		if (ft_str_is_digit(argv[i + 1]) && !ft_value_limits(number))
		{
			stack->stack_a[i] = number;
			i++;
		}
		else
		{
			free(stack->stack_a);
			return ;
		}
	}
}

void	selection_sort(t_stack *stack)
{
	fill_index(stack);
	find_top_bottom(stack);
	if (stack->len_a == 1)
		return ;
	else if (stack->len_a == 2)
		ft_sort_two_a(stack);
	else if (stack->len_a == 3)
		ft_sort_three(stack);
	else if (stack->len_a <= 5)
		ft_sort_five(stack);
	else if (stack->len_a <= 10)
		ft_crazy_sort(stack);
	else if (stack->len_a > 10)
		ft_sort(stack);
	return ;
}

int	main(int ac, char **av)
{
	t_stack	*stack;

	(void)av;
	stack = malloc(sizeof(t_stack));
	ft_start_stacks(stack, (ac - 1));
	ft_fill_stack(ac, av, stack);
	if (ac <= 1 || stack_sorted_a(stack))
		return (0);
	else if (ft_is_duplicated(stack) == 0)
	{
		if (stack_sorted_a(stack) == 0)
			selection_sort(stack);
		else
			ft_printf("%s\n", "Error");
	}
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
	return (0);
}
