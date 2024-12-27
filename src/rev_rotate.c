/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:22:42 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/27 14:44:36 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_stack_node **stack)
{
	t_stack_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

//rotate the bottom of a to the top of the stack and print instruction
void	rra(t_stack_node **a, int print)
{
	rev_rotate(a);
	if (print == 1)
		ft_printf("rra\n");
}

//rotate the bottom of b to the top of the stack and print instruction.
void	rrb(t_stack_node **b, int print)
{
	rev_rotate(b);
	if (print == 1)
		ft_printf("rrb\n");
}

//rotate both stacks bottom nodes to the top of their stacks.
void	rrr(t_stack_node **a, t_stack_node **b, int print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (print == 1)
		ft_printf("rrr\n");
}
