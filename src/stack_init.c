/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 10:24:18 by rhvidste          #+#    #+#             */
/*   Updated: 2025/01/02 11:15:44 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	node_init(int data, int index, t_stack_node *node)
{
	node->next = NULL;
	node->target_node = NULL;
	node->nbr = data;
	node->index = index;
	node->push_cost = 0;
	node->above_median = 0;
	node->cheapest = 0;
}

static void	append_node(t_stack_node **stack, int data, int index)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (! node)
		return ;
	node_init(data, index, node);
	if (!(*stack))
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

t_stack_node	*get_cheapest(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest == 1)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	prep_for_push(
		t_stack_node **stack,
		t_stack_node *top_node,
		char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median == 1)
				ra(stack, 1);
			else
				rra(stack, 1);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median == 1)
				rb(stack, 1);
			else
				rrb(stack, 1);
		}
	}
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			free_errors(a);
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		if (error_duplicate(*a, (int)n))
			free_errors(a);
		append_node(a, (int)n, i);
		i++;
	}
}
