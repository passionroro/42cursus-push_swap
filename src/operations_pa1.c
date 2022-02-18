/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:45:17 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/14 17:44:21 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	*decrease_size_b(t_tab *t)
{
	int	i;

	if (!t->b)
		return (NULL);
	t->posb -= 1;
	t->tmp = (long *)malloc(sizeof(long) * t->posb);
	if (!t->tmp)
		return (NULL);
	i = -1;
	while (++i < t->posb)
		t->tmp[i] = t->b[i + 1];
	t->b = NULL;
	free(t->b);
	return (t->tmp);
}

long	*increase_size_a(t_tab *t, int save)
{
	int	i;

	if (!t->a)
	{
		t->pos = 1;
		t->tmp = (long *)malloc(sizeof(long) * t->pos);
		if (!t->tmp)
			return (NULL);
		t->tmp[0] = save;
		return (t->tmp);
	}
	t->pos += 1;
	t->tmp = (long *)malloc(sizeof(long) * t->pos);
	if (!t->tmp)
		return (NULL);
	i = -1;
	t->tmp[0] = save;
	while (++i < t->pos)
		t->tmp[i + 1] = t->a[i];
	t->a = NULL;
	free(t->a);
	return (t->tmp);
}

int	pa(t_tab *t)
{
	int	save;

	if (t->posb == 0)
		return (1);
	save = t->b[0];
	t->b = decrease_size_b(t);
	t->a = increase_size_a(t, save);
	write (1, "pa\n", 3);
	return (0);
}
