/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:28:23 by rhvidste          #+#    #+#             */
/*   Updated: 2025/01/10 14:40:37 by rhvidste         ###   ########.fr       */
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
	//str = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	str = ft_strdup("");
	str = str_comp(argc, argv);
	split = ft_split(str, ' ');
	free(str);
	init_stack_a(&a, split);
	free_split(split);
	//list output-----------------------------------
	//ft_printf("linked list output before sort: \n");
	//ft_print_list(a);
	if (stack_sorted(a) == 0)
	{
		//ft_printf("stack not sorted \n");
		if (stack_len(a) == 2)
		{
			sa(&a, 1);
			//ft_printf("sorted stack:\n");
			//ft_print_list(a);
		}
		else if (stack_len(a) == 3)
		{
			sort_three(&a);
			//ft_printf("sorted stack:\n");
			//ft_print_list(a);
		}
		else 
		{
			//ft_printf("larger stack sort needed:\n");
			sort_stacks(&a, &b);
			//ft_printf("sorted stack:\n");
			//ft_print_list(a);
		}
	}
	//else
		//ft_printf("stack is sorted \n");
	//ft_print_list(a);
	while(a->prev)
		a = a->prev;
	free_stack(a);
	free_stack(b);
	exit(0);
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
