/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:04:29 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/27 14:49:01 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list(t_stack_node *list);

int	main(int argc, char **argv)
{
	char			*str;
	char			**split;
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	str = ft_strdup("");
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	str = str_comp(argc, argv);
	split = ft_split(str, ' ');
	free(str);
	init_stack_a(&a, split);
	free_split(split);
	//list output-----------------------------------
	ft_printf("linked list output before swap: \n");
	ft_print_list(a);
	if (stack_sorted(a) == 0)
	{
		ft_printf("stack not sorted \n");
		if (stack_len(a) == 2)
		{
			sa(&a, 1);
			ft_printf("stack sorted\n");
			ft_print_list(a);
		}
	}
	else
		ft_printf("stack is not sorted \n");
	//pa(&b, &a, 1);
	rra(&a, 1);
	rra(&a, 1);
	ft_printf("list a :\n");
	ft_print_list(a);
	ft_printf("list b : \n");
	ft_print_list(b);
	free_stack(a);
	free_stack(b);
			//check for 3 numbers
				//if so, implament our simple sort three algorithm
			// if the stack has moe than 3 numbers
				//if so, implament radix algorithm.
}

//function to print output of list;
void	ft_print_list(t_stack_node *list)
{
	while (list)
	{
		ft_printf("list[%d] = %d\n", list->index, list->nbr);
		list = list->next;
	}
}
