/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:23:14 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/30 12:30:25 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	zeros_in_int(char **a)
{
	int	i;
	int	j;

	i = 0;
	while (a[i])
	{	
		j = 0;
		while (a[i][j])
			j++;
		if ((a[i][0] != '0') || (ft_issign(a[i][0]) && a[i][1] != '0'))
		{
			if (j > 11)
				return (1);
			else
				break;
		}
		if ((a[i][0] == '0') || (ft_issign(a[i][0]) && a[i][1] == '0'))
			break;
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

