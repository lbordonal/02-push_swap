/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/18 00:54:04 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(void)
{
	t_list	*stack_a; // stack_a = head_a
	t_list	*stack_a1;
	t_list	*stack_a2;
	t_list	*stack_a3;
	t_list	*stack_b; // stack_b = head_b
/*	t_list	*stack_b1;
	t_list	*stack_b2;
	t_list	*stack_b3; */

	/* stack_a: */
	stack_a1 = ft_lstnew("|5|");
	stack_a2 = ft_lstnew("|7|");
	stack_a3 = ft_lstnew("|8|");
	stack_a1->next = stack_a2;
	stack_a2->next = stack_a3;
	stack_a3->next = NULL;
	stack_a = stack_a1;
	/* stack_b: */
	/* stack_b1 = ft_lstnew("|Ariadne|");
	stack_b2 = ft_lstnew("|Lucas|");
	stack_b3 = ft_lstnew("|Matheus|");
	stack_b1->next = stack_b2;
	stack_b2->next = stack_b3;
	stack_b3->next = NULL;
	stack_b = stack_b1; */
	stack_b = create_stack_empty(stack_a);
	/* print listas: */
	ft_printf("%s","[A]: ");
	ft_printlist(stack_a);
	ft_printf("%s","[B]: ");
	ft_printlist(stack_b);
	/* operacoes: */
	//sa(stack_a);
	//sb(stack_b);
	//double_swap(stack_a, stack_b);
	//pa(stack_a, stack_b);
	//pb(stack_b, stack_a);
	//ra(stack_a);
	//ra(stack_a);
	//rb(stack_b);
	//rr(stack_a, stack_b);
	//rra(stack_a);
	//rrb(stack_b);
	rrr(stack_a, stack_b);


	//se fizer qualquer operacao em seguida de outra, perco o primeiro da lista, pq?
}
