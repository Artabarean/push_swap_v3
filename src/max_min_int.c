/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:23:14 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/28 12:39:52 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	max_min_int(char **arg)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (arg[i])
	{
		j = 0;
		k = 0;
		while (arg[i][j])
		{
			if (arg[i][j] != ' ')
				k++;
			if (arg[i][j] == ' ')
				k = 0;
			if (k > 11)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
