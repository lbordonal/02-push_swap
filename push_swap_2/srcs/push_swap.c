/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:50:46 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/30 20:32:13 by lbordona         ###   ########.fr       */
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
		if (ft_str_is_digit(argv[i + 1]))
		{
			number = ft_atol(argv[i + 1]);
			if (number < -2147483648 || number > 2147483647)
				return ;
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

void	check_errors_in_stack(t_stack *stack)
{
	if (duplicated_element(stack) || out_of_limits(stack))
	{
		ft_printf("%s\n", "Error");
		exit (0);
	}
	return ;
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

	ft_is_all_digits(ac, av);
	stack = malloc(sizeof(t_stack));
	ft_start_stacks(stack, (ac - 1));
	ft_fill_stack(ac, av, stack);
	check_errors_in_stack(stack);
	if (ac <= 1 || stack_sorted_a(stack))
		return (0);
	else
		selection_sort(stack);
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);
	return (0);
}
