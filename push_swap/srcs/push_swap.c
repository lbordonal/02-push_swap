/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/08 18:31:23 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	ft_start_stack(int len)
{
	t_stack	stack;

	stack.len = len;
	stack.stack = malloc(sizeof(int) * len);
	if (stack.stack == NULL)
		return (stack);
	stack.index = malloc(sizeof(int) * len);
	return (stack);
}

void	fill_stack(int argc, char **argv, t_stack *stack_a)
{
	int			i;
	long int	num;

	(void)argc;
	i = 0;
	while (i < stack_a->len)
	{
		num = ft_atol(argv[i + 1]);
		if (ft_str_is_digit(argv[i + 1]) && !ft_value_limits(num))
		{
			stack_a->stack[i] = num;
			i++;
		}
		else
		{
			free(stack_a->stack);
			return ;
		}
	}
}

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	stack_a = ft_start_stack(ac - 1);
	stack_b = ft_start_stack(ac - 1);
	stack_b.len = 0;
	fill_stack(ac, av, &stack_a);
	if (ac <= 1)
		return (0);
	else if (ft_is_duplicated(&stack_a) == 0)
	{
		if (stack_sorted(&stack_a) == 0)
			selection_sort(&stack_a, &stack_b);
		else
			ft_printf("%s\n", "Error");
	}
	free_all(&stack_a, &stack_b);
	//free(stack_a.stack);
	//free(stack_b.stack);
	//free(stack_a.index);
	//free(stack_b.index);
	return (0);
}
