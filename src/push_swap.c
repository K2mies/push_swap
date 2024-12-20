/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:04:29 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/20 16:08:07 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*temp;
	//t_stack_node	*b;

	a = NULL;
	//b = NULL;
	
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if	(argc == 2)
	{
		argv = ft_split(argv[1], ' ');
	}
	else if (argc > 2)
	{
		argv = argv + 1;
	}
	init_stack_a(&a, argv);
	printf("linked list output: \n");
	temp = a;
	while(temp != NULL)
	{
		printf("num = %d\n", temp->nbr);
		temp = temp->next;
	}

	/*int		i = 0;
	while (argv[i])
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		i++;
	}
	*/
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

