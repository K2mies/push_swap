/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:51:28 by rhvidste          #+#    #+#             */
/*   Updated: 2025/01/08 13:29:52 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/include/libft.h"

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int						nbr;
	int						index;
	int						push_cost;
	int						above_median;
	int						cheapest;
	struct s_stack_node		*target_node;
	struct s_stack_node		*next;
	struct s_stack_node		*prev;
}							t_stack_node;

//string handling--------------------------------------------------
long			ft_atol(const char *s);
//error handling----------------------------------------------------
char			*str_comp(int argc, char **argv);
int				error_syntax(char *str);
int				error_duplicate(t_stack_node *a, int n);
void			free_stack(t_stack_node *stack);
void			free_split(char **vector);
void			free_errors(t_stack_node **a);
//stack functions---------------------------------------------------
void			init_stack_a(t_stack_node **a, char **argv);
t_stack_node	*get_cheapest(t_stack_node *stack);
void			prep_for_push(
					t_stack_node **stack,
					t_stack_node *top_node,
					char stack_name);
//sets the index and also wether or not node is above the median (to 1 or 0).
void			current_index(t_stack_node *stack);
void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
//stack utils-------------------------------------------------------
int				stack_len(t_stack_node *stack);
int				stack_sorted(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
//sorting------------------------------------------------------------
void			sort_three(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);
//commands-----------------------------------------------------------
//SWAP---------------------------------------------------------------
//swap first two nodes of stack(swap a).
void			sa(t_stack_node **a, int print);
//swap first two nodes of stack(swap b).
void			sb(t_stack_node **b, int print);
//swap both stacks simultaniously(swap both).
void			ss(t_stack_node **a, t_stack_node **b, int print);
//PUSH_--------------------------------------------------------------
//push on top of 'b', the top 'a' (push a) and print the instruction;
void			pa(t_stack_node **a, t_stack_node **b, int print);
//push on top of 'a', the top 'b' (push b) and print the instruction
void			pb(t_stack_node **a, t_stack_node **b, int print);
//ROTATE-------------------------------------------------------------
//rotate the top 'a' node to the bottom of the stack (rotate a)
void			ra(t_stack_node **a, int print);
//rotate the top 'b' node to the bottom fo the stack (rotate b)
void			rb(t_stack_node **b, int print);
//rotate both stacks from top to bottom(rotate rotate)
void			rr(t_stack_node **a, t_stack_node **b, int print);
//REV ROTATE----------------------------------------------------------
//rotate the bottom of 'a' to the top of the stack.
void			rra(t_stack_node **a, int print);
//rotate the bottom of b to teh top of the stack.
void			rrb(t_stack_node **b, int print);
//rotate both stacks bottom nodes tot he top.
void			rrr(t_stack_node **a, t_stack_node **b, int print);
//rotate both based on cheapest
void			rotate_both(
					t_stack_node **a,
					t_stack_node **b,
					t_stack_node *cheapest_node);
//rev rotate both based on chepest
void			rev_rotate_both(
					t_stack_node **a,
					t_stack_node **b,
					t_stack_node *cheapest_node);
#endif
