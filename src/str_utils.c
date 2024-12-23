/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:00:36 by rhvidste          #+#    #+#             */
/*   Updated: 2024/12/23 13:04:37 by rhvidste         ###   ########.fr       */
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
	i = 1;
	while (i < argc)
	{
		char	*old_str;
		old_str = str;
		temp = ft_strjoin(str, " ");
		str = ft_strjoin(temp, argv[i]);
		free(old_str);
		free(temp);
		i++;
	}
	return (str);
}
