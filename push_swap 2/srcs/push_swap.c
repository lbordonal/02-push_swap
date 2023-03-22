/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:50:46 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/22 00:14:09 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_start_stacks(t_stack	*stack, int len)
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
	stack->len_b = argc - 1;
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


int	main(int ac, char **av)
{
	t_stack	*stack;

	(void)av;

	stack = malloc(sizeof(t_stack));
	ft_start_stacks(stack, (ac - 1));

	ft_printstack_a(stack);
	ft_printstack_b(stack);
	ft_printf("len_a = %d\n", stack->len_a);
	ft_printf("len_b = %d\n", stack->len_b);
	ft_printf("bottom = %d\n", stack->bottom);
	ft_printf("top = %d\n", stack->top);


	ft_fill_stack(ac, av, stack);

	pb(stack);
	pb(stack); //erro aqui

	ft_printstack_a(stack);
	ft_printstack_b(stack); //erro aqui
	ft_printf("len_a = %d\n", stack->len_a);
	ft_printf("len_b = %d\n", stack->len_b);
	ft_printf("bottom = %d\n", stack->bottom);
	ft_printf("top = %d\n", stack->top);

	/* free: */
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack);

	//if (ac <= 1 || stack_sorted(stack))
	//	return (0);
	return (0);
}
