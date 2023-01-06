/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/06 15:43:07 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	t_list	*new;
	t_list	*stack_b;
	t_list	*stack_b1;
	t_list	*stack_b2;

	(void)argc;
	i = 2;
	stack_a = ft_lstnew(argv[1]);
	//stack_b para testes
	stack_b = ft_lstnew("|Ariadne|");
	stack_b1 = ft_lstnew("|Lucas|");
	stack_b2 = ft_lstnew("|Matheus|");
	stack_b->next = stack_b1;
	stack_b1->next = stack_b2;
	while (argv[i])
	{
		new = ft_lstnew(argv[i]);
		ft_lstadd_back(&stack_a, new);
		i++;
	}
	ft_printlist(stack_a);
	ft_printlist(stack_b);
	//sa(stack_a);
	//sb(stack_b);
	//double_swap(stack_a, stack_b);
	//pa(stack_a, stack_b);
	pb(stack_b, stack_a);

	//se fizer qualquer operacao em seguida de outra, perco o primeiro da lista, pq?
}
