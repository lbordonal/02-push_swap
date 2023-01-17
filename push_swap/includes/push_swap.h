/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:22:39 by lbordona          #+#    #+#             */
/*   Updated: 2023/01/17 18:49:33 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/* swap_operations.c: */
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	double_swap(t_list *stack_a, t_list *stack_b);
/* push_operations.c: */
void	pa(t_list *stack_a, t_list *stack_b);
void	pb(t_list *stack_b, t_list *stack_a);
/* rotate_operations.c: */
void	ra(t_list *stack_a);
void	rb(t_list *stack_b);
void	rr(t_list *stack_a, t_list *stack_b);
void	rra(t_list *stack_a);
void	rrb(t_list *stack_b);

#endif
