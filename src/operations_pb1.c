/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:45:17 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/14 17:49:03 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	*increase_size_b(t_tab *t, int save)
{
	int	i;

	if (!t->b)
	{
		t->posb = 1;
		t->tmp = (long *)malloc(sizeof(long) * t->posb);
		if (!t->tmp)
			return (NULL);
		t->tmp[0] = save;
		return (t->tmp);
	}
	t->posb += 1;
	t->tmp = (long *)malloc(sizeof(long) * t->posb);
	if (!t->tmp)
		return (NULL);
	i = -1;
	t->tmp[0] = save;
	while (++i < t->posb)
		t->tmp[i + 1] = t->b[i];
	t->b = NULL;
	free(t->b);
	return (t->tmp);
}

long	*decrease_size_a(t_tab *t)
{
	int	i;

	if (!t->a)
		return (NULL);
	t->pos -= 1;
	t->tmp = (long *)malloc(sizeof(long) * t->pos);
	if (!t->tmp)
		return (NULL);
	i = -1;
	while (++i < t->pos)
		t->tmp[i] = t->a[i + 1];
	t->a = NULL;
	free(t->a);
	return (t->tmp);
}

int	pb(t_tab *t)
{
	int	save;

	if (t->pos == 0)
		return (1);
	save = t->a[0];
	t->a = decrease_size_a(t);
	t->b = increase_size_b(t, save);
	write (1, "pb\n", 3);
	return (0);
}
