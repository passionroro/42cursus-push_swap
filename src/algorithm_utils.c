/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:58:49 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/14 17:10:29 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	specific_pos(long *tab, int size, char specific)
{
	int	i;
	int	x;
	int	pos;

	i = -1;
	pos = 0;
	x = tab[pos];
	while (++i < size)
	{
		if (specific == 's' && tab[i] < x)
		{
			x = tab[i];
			pos = i;
		}
		else if (specific == 'B' && tab[i] > x)
		{
			x = tab[i];
			pos = i;
		}
	}
	return (pos);
}

void	simplified_sort(t_tab *t, long *a, long *a_sorted)
{
	int		i;
	int		j;
	long	*a_simplified;

	a_simplified = (long *)malloc(sizeof(long) * t->pos);
	if (!a_simplified)
		exit (0);
	i = -1;
	while (++i < t->pos)
	{
		j = -1;
		while (a[i] != a_sorted[++j])
			;
		t->a[i] = j;
	}
	free(a_sorted);
	free(a_simplified);
}

long	*insertion_sort(t_tab *t)
{
	int		i;
	int		j;
	int		tmp;
	long	*a_sorted;

	a_sorted = (long *)malloc(sizeof(long) * t->pos);
	if (!a_sorted)
		return (NULL);
	i = -1;
	while (++i < t->pos)
		a_sorted[i] = t->a[i];
	i = -1;
	while (++i < t->pos)
	{
		j = i - 1;
		while (j >= 0 && a_sorted[j] > a_sorted[j + 1])
		{
			tmp = a_sorted[j];
			a_sorted[j] = a_sorted[j + 1];
			a_sorted[j + 1] = tmp;
			j--;
		}
	}
	return (a_sorted);
}

void	rotate_smallest(t_tab *t, int i, int save_max)
{
	int	j;

	j = -1;
	while (++j < i)
	{
		if (t->a[j] == save_max)
		{
			while (j-- > -1)
				ra(t);
			break ;
		}
	}
}

int	biggest_int(long *tab, int size)
{
	int	i;
	int	max;

	i = -1;
	max = tab[0];
	while (++i < size)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}
