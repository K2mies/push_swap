/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:51:28 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/23 17:05:28 by rhvidste         ###   ########.fr       */
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


//error handling-------------------------------------
char	*str_comp(int argc, char **argv);
int		error_syntax(char *str);
int		error_duplicate(t_stack_node *a, int n);
void	free_stack(t_stack_node *stack);
void	free_split(char **vector);
void	free_errors(t_stack_node **a);
//stack functions------------------------------------
void	init_stack_a(t_stack_node **a, char **argv);
//stack utils----------------------------------------
int		stack_len(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);


#endif
