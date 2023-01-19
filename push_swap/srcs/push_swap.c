/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/19 00:19:48 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_stack	stack_a;
	t_stack	stack_b;

	i = 0;
	stack_a.stack = malloc(sizeof(int) * (ac - 1));
	stack_a.len = (ac - 1);
	stack_b.len = 0;
	while (i < stack_a.len)
	{
		stack_a.stack[i] = ft_atoi(av[i + 1]);
		i++;
	}
	if (ft_checkstack(&stack_a) != 1)
	{
		stack_a.finalpos = malloc(sizeof(int) * stack_a.len);
		stack_b.stack = malloc(sizeof(int) * stack_a.len);
		stack_b.finalpos = malloc(sizeof(int) * stack_a.len);
	}
	//ft_finalpos(&stack_a);
	ft_printstack(&stack_a);
	ft_printstack(&stack_b);
}
