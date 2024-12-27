/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:54:02 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/27 13:39:29 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack_node **dst, t_stack_node **src)
{
	t_stack_node	*push_node;

	if (!*src)
		return ;
	push_node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	if (!*dst)
	{
		*dst = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *dst;
		push_node->next->prev = push_node;
		*dst = push_node;
	}
}

//push on top of 'b', the top 'a'(push a) and print instruction.
void	pa(t_stack_node **a, t_stack_node **b, int print)
{
	push(a, b);
	if (print == 1)
		ft_printf("pa\n");
}

//push on top of 'a', the top 'b'(push b) and print instruction.
void	pb(t_stack_node **b, t_stack_node **a, int print)
{
	push(b, a);
	if (print == 1)
		ft_printf("pb\n");
}
