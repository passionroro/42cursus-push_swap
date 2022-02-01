/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:57:48 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/01 16:44:37 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	algorithm500(t_tab *t)
{
	(void)t;
	return (0);
}

int	algorithm100(t_tab *t)
{
	t->sort = insertion_sort(t);
	if (!t->sort)
		return (1);
	return (0);
}

int	*insertion_sort(t_tab *t)
{
	int	i;
	int	j;
	int	tmp;
	int	*insert;

	insert = malloc(sizeof(int) * t->pos);
	if (!insert)
		return (NULL);
	i = -1;
	while (++i < t->pos)
		insert[i] = t->tab[i];
	i = -1;
	while (++i < t->pos)
	{
		j = i - 1;
		while (j >= 0 && insert[j] > insert[j + 1])
		{
			tmp = insert[j];
			insert[j] = insert[j + 1];
			insert[j + 1] = tmp;
			j--;
		}
	}
	return (insert);
}
