/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:19:35 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/27 14:53:17 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack_node **head)
{
	if (!*head || !(*head)->next)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

//swap the first two nodes of stack "a".
void	sa(t_stack_node **a, int print)
{
	swap(a);
	if (print == 1)
		ft_printf("sa\n");
}

//swap the firs two nodes of stack "b".
void	sb(t_stack_node **b, int print)
{
	swap(b);
	if (print == 1)
		ft_printf("sb\n");
}

//simultaniously swap the first two nodes of both stacks
void	ss(t_stack_node **a, t_stack_node **b, int print)
{
	swap(a);
	swap(b);
	if (print == 1)
		ft_printf("ss\n");
}
