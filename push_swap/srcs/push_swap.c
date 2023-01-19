/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/19 16:49:06 by lbordona         ###   ########.fr       */
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
	stack_a.stack = malloc(sizeof(int) * (ac - 1));
	stack_a.len = (ac - 1);
	stack_b.len = 0;
	while (i < stack_a.len)
	{
		num = ft_atoi(av[i + 1]);
		stack_a.stack[i] = num;
		i++;
	}
	if (ft_checkstack(&stack_a) != 1)
	{
		stack_a.finalpos = malloc(sizeof(int) * stack_a.len);
		stack_b.stack = malloc(sizeof(int) * stack_a.len);
		stack_b.finalpos = malloc(sizeof(int) * stack_a.len);
	}
	//ft_finalpos(&stack_a);
	ft_printf("%s\n", "[stack_a]");
	ft_printstack(&stack_a);
	ft_printf("\n%s\n", "[stack_b]");
	ft_printstack(&stack_b);
	/* sa(&stack_a);
	ft_printf("%s\n", "[swap(stack_a)]");
	ft_printstack(&stack_a);*/
	/* ss(&stack_a, &stack_b);
	ft_printf("\n%s\n", "[double_swap(stack_a)]");
	ft_printstack(&stack_a);
	ft_printf("\n%s\n", "[double_swap(stack_b)]");
	ft_printstack(&stack_b); */

	/* pa(&stack_a, &stack_b);
	ft_printf("\n%s\n", "[push_a(stack_a)]");
	ft_printstack(&stack_a);
	ft_printf("\n%s\n", "[push_a(stack_b)]");
	ft_printstack(&stack_b);
	pb(&stack_a, &stack_b);
	ft_printf("%s\n", "[push_b(stack_a)]");
	ft_printstack(&stack_a);
	ft_printf("\n%s\n", "[push_b(stack_b)]");
	ft_printstack(&stack_b);*/

	/* rr(&stack_a, &stack_a);
	ft_printf("%s\n", "[rotate_a(stack_a)]");
	ft_printstack(&stack_a); */
	/* rb(&stack_a);
	ft_printf("%s\n", "[rotate_b(stack_b)]");
	ft_printstack(&stack_a); */

}
