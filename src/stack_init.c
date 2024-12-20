#include "push_swap.h"


static void	append_node(t_stack_node **stack, int data, int index)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (! node)
		return ;
	node->next = NULL;
	node->nbr = data;
	node->index = index;
	//node->cheapest = 0;
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

void	init_stack_a(t_stack_node **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		n = ft_atoi(argv[i]);
		append_node(a, (int)n, i);
		i++;
	}
}


