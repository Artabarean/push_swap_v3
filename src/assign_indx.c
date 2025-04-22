/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_indx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:55:17 by atabarea          #+#    #+#             */
/*   Updated: 2025/04/22 11:04:52 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int sort_pseudo(int	*pseudo)
{
	int	i;

	i = 0;
	
}

int	copy_array(int	*pseudo, t_list *stack)
{
	int	i;

	i = 0;
	while (i <= stack->size)
	{
		pseudo[i] = stack->array[i];
		i++;
	}
	return (pseudo);
}

int	assign_indx(t_list *stack)
{
	int	*pseudo;
	
	pseudo = (int *)malloc(sizeof(int) * stack->size);
	if (!pseudo)
	{
		free(pseudo);
		return (NULL);
	}
	pseudo = copy_array(pseudo, stack);
	pseudo = sort_pseudo(pseudo);
}