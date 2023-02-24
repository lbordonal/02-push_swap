/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/24 09:23:50 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	int		num;
	t_stack	stack_a;
	t_stack	stack_b;

	i = 0;
	if (ac < 1)
	{
		ft_printf("%s\n", "Error");
		return (0);
	}
	stack_a.len = (ac - 1);
	stack_a.stack = malloc(sizeof(int) * (ac - 1));
	stack_a.index = malloc(sizeof(int) * stack_a.len);
	stack_b.stack = malloc(sizeof(int) * stack_a.len);
	stack_b.index = malloc(sizeof(int) * stack_a.len);
	stack_b.len = 0;
	while (i < stack_a.len)
	{
		num = ft_atoi(av[i + 1]);
		stack_a.stack[i] = num;
		i++;
	}
	if (detect_error(&stack_a) == 0)
		selection_sort(&stack_a, &stack_b);
	else
		ft_printf("%s\n", "Error");
	free(stack_a.stack);
	free(stack_b.stack);
	free(stack_a.index);
	free(stack_b.index);
	return (0);
}
