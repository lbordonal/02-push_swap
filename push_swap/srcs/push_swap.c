/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/03/01 14:06:49 by lbordona         ###   ########.fr       */
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
	stack_a.len = (ac - 1);
	stack_a.stack = malloc(sizeof(int) * (ac - 1));
	stack_a.index = malloc(sizeof(int) * stack_a.len);
	stack_b.stack = malloc(sizeof(int) * stack_a.len);
	stack_b.index = malloc(sizeof(int) * stack_a.len);
	stack_b.len = 0;
	while (i < stack_a.len)
	{
		if (ft_str_is_digit(av[i + 1]) == 1 && ft_value_limits(ft_atol(av[i + 1])) == 0)
		{
			num = ft_atol(av[i + 1]);
			stack_a.stack[i] = num;
			i++;
		}
		else
			error_handler(1);
	}
	/*ft_printf("%s\n", "[stack_a]");
	ft_printstack(&stack_a);
	ft_printf("\n%s\n", "[stack_b]");
	ft_printstack(&stack_b);
	ft_printf("\n%s\n", "------------------------------------------");*/
	if (ac <= 1)
		return (0);
	else if (ft_is_duplicated(&stack_a) == 0)
	{
		if (stack_sorted(&stack_a) == 0)
		{
			selection_sort(&stack_a, &stack_b);
			/*ft_printf("%s\n", "[stack_a]");
			ft_printstack(&stack_a);
			ft_printf("\n%s\n", "[stack_b]");
			ft_printstack(&stack_b);
			ft_printf("\n%s\n", "------------------------------------------");*/
		}
	}
	else
		ft_printf("%s\n", "Error");
	free_all(&stack_a, &stack_b);
	return (0);
}
