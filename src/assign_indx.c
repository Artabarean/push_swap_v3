/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_indx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:55:17 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/23 12:58:45 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*sort_pseudo(int *pseudo, int size)
{
	int	i;
	int	temp;

	if (size <= 1)
		return (pseudo);
	i = 0;
	temp = 0;
	while (i < size - 1)
	{
		if (pseudo[i] > pseudo[i + 1])
		{
			temp = pseudo[i];
			pseudo[i] = pseudo[i + 1];
			pseudo[i + 1] = temp;
		}
		i++;
	}
	sort_pseudo(pseudo, size - 1);
	return (pseudo);
}

int	*copy_array(int *pseudo, t_list *stack)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		pseudo[i] = stack->array[i];
		i++;
	}
	return (pseudo);
}

int	*assign_indx(t_list *stack)
{
	int	*pseudo;
	int	j;
	int	i;

	i = 0;
	pseudo = (int *)malloc(sizeof(int) * stack->size);
	if (!pseudo)
		return (free(pseudo), NULL);
	pseudo = copy_array(pseudo, stack);
	pseudo = sort_pseudo(pseudo, stack->size);
	while (i < stack->size)
	{
		j = 0;
		while (j < stack->size)
		{
			if (stack->array[i] == pseudo[j])
			{
				stack->indx[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (free(pseudo), stack->indx);
}
