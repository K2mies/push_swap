/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:51:28 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/20 13:51:49 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct	s_stack_node
{
	int						nbr;
	int						index;
	//int					push_cost;
	//bool					above_median;
	//bool					cheapest;
	struct	s_stack_node	*next;
	struct	s_stack_node	*prev;
}							t_stack_node;

//stack functions------------------------------------
void	init_stack_a(t_stack_node **a, char **argv);
t_stack_node	*find_last(t_stack_node *stack);

#endif
