/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:39:59 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/27 14:49:23 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//function that rotates the stacks top node to the bottom
static void	rotate(t_stack_node **stack)
{
	t_stack_node	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = find_last(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

//Rotate the top 'a' node to the bottom of the stack (rotate a).
void	ra(t_stack_node **a, int print)
{
	rotate(a);
	if (print == 1)
		ft_printf("ra\n");
}

//Rotate the top 'b' node to the bottom of the stack (rotate b)
void	rb(t_stack_node **b, int print)
{
	rotate(b);
	if (print == 1)
		ft_printf("rb\n");
}

//simultaneously rotate both the top 'a' and 'b' nodes to the bottom.
void	rr(t_stack_node **a, t_stack_node **b, int print)
{
	rotate(a);
	rotate(b);
	if (print == 1)
		ft_printf("rr\n");
}
