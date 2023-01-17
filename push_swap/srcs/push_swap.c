/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:50 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/17 12:50:05 by lbordona         ###   ########.fr       */
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
	t_list	*stack_b1;
	t_list	*stack_b2;
	t_list	*stack_b3;

	//stack_a para testes:
	stack_a1 = ft_lstnew("|5|");
	stack_a2 = ft_lstnew("|7|");
	stack_a3 = ft_lstnew("|8|");
	stack_a1->next = stack_a2;
	stack_a2->next = stack_a3;
	stack_a3->next = NULL;
	stack_a = stack_a1;
	//stack_b para testes:
	stack_b1 = ft_lstnew("|Ariadne|");
	stack_b2 = ft_lstnew("|Lucas|");
	stack_b3 = ft_lstnew("|Matheus|");
	stack_b1->next = stack_b2;
	stack_b2->next = stack_b3;
	stack_b3->next = NULL;
	stack_b = stack_b1;
	//Print listas:
	ft_printf("%s","[A]: ");
	ft_printlist(stack_a);
	ft_printf("%s","[B]: ");
	ft_printlist(stack_b);
	//Operacoes:
	sa(stack_a);
	sa(stack_a);
	//sb(stack_b);
	//double_swap(stack_a, stack_b);
	//pa(stack_a, stack_b);
	//pb(stack_b, stack_a);

	//se fizer qualquer operacao em seguida de outra, perco o primeiro da lista, pq?
}
