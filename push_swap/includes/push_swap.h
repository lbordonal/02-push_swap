/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:39 by lbordona          #+#    #+#             */
/*   Updated: 2023/02/01 18:45:10 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/* swap_operations.c: */
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
/* push_operations.c: */
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_b, t_stack *stack_a);
/* rotate_operations.c: */
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
/* rerotate_operations.c: */
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
/* sort_operations.c: */
void	ft_talisca(t_stack *stack);
void	ft_marquinhos(t_stack *stack_a, t_stack *stack_b);
void	ft_sort_three(t_stack *stack_a);
void	ft_sort_two(t_stack *stack_a);
void	ft_sort_five(t_stack *stack_a, t_stack *stack_b);

#endif
