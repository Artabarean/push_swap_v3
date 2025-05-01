/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:23:14 by atabarea          #+#    #+#             */
/*   Updated: 2025/05/01 10:48:50 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	zeros_in_int(char **a)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	while (a[i])
	{
		k = 0;
		j = 0;
		while (a[i][j])
			j++;
		while (a[i][k] == '0' || a[i][k] == '-')
			k++;
		if (j > (k + 11))
			return (1);
		else
			break ;
		i++;
	}
	return (0);
}

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
			while (arg[i][k])
				k++;
			if (k > 11 && zeros_in_int(arg) == 1)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
