/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:04:29 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/27 10:32:24 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char			*str;
	char			**split;
	t_stack_node	*a;
	t_stack_node	*a_head;
	//t_stack_node	*b;
	a = NULL;
	//a_head = NULL;
	//b = NULL;
	str = ft_strdup("");
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	str = str_comp(argc, argv);
	//printf("%s\n", str);
	split = ft_split(str, ' ');
	free(str);
	init_stack_a(&a, split);
	free_split(split);
	//list output-----------------------------------
	a_head = a;
	printf("linked list output: \n");
	int	i;
	i = 0;
	while(a != NULL)
	{
		printf("num[%d] = %d\n", i++, a->nbr);
		a = a->next;
	}
	//---------------------------------------------
	free_stack(a_head);
	//populate the stack
		//initialiize the stack a and append each input number as a node.
		// error handling. (free stack a and return error).
		//check for each input if it is a long integer
			//if the input is a string convert it to a long integer.
		//append the nodes to stack 'a'	
	//check if stack a is sorted.
		//if not sorted, implament sorting algorithm.
			//check for 2 numbers
				//if so, simply swap the numbers
			//check for 3 numbers
				//if so, implament our simple sort three algorithm
			// if the stack has moe than 3 numbers
				//if so, implament radix algorithm.
}
