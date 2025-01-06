/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:00:36 by rhvidste          #+#    #+#             */
/*   Updated: 2025/01/06 17:22:39 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **vector)
{
	int		i;

	i = 0;
	while (vector[i])
	{
		free(vector[i++]);
	}
	free(vector);
}

char	*str_comp(int argc, char **argv)
{
	char	*str;
	char	*temp;
	int		i;

	str = NULL;
	i = 1;
	while (i < argc)
	{
		if (str == NULL)
			str = ft_strdup(argv[i]);
		else
		{
			temp = ft_strjoin(str, " ");
			free(str);
			str = ft_strjoin(temp, argv[i]);
			free(temp);
		}
		if (str == NULL)
			return (NULL);
		i++;
	}
	return (str);
}
