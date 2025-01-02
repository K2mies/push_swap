/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:04:29 by rhvidste          #+#    #+#             */
/*   Updated: 2025/01/02 13:42:55 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(t_stack_node *a, t_stack_node *b)
{
	if (stack_sorted(a) == 0)
	{
		if (stack_len(a) == 2)
		{
			sa(&a, 1);
		}
		else if (stack_len(a) == 3)
		{
			sort_three(&a);
		}
		else
		{
			sort_stacks(&a, &b);
		}
	}
}

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
	sort(a, b);
	free_stack(a);
	free_stack(b);
}
