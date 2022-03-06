/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:45:17 by rohoarau          #+#    #+#             */
/*   Updated: 2022/03/03 13:59:20 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	increase_size_b(t_tab *t, int save)
{
	int	i;

	if (!t->b)
	{
		t->posb = 1;
		t->b = (long *)malloc(sizeof(long) * t->pos);
		if (!t->b)
			return ;
		t->b[0] = save;
		return ;
	}
	t->posb += 1;
	i = t->posb;
	while (i > 0)
	{
		t->b[i] = t->b[i - 1];
		i--;
	}
	t->b[i] = save;
}

void	decrease_size_a(t_tab *t)
{
	int	i;

	if (!t->a)
		return ;
	t->pos -= 1;
	i = -1;
	while (++i < t->pos)
		t->a[i] = t->a[i + 1];
}

int	pb(t_tab *t)
{
	if (t->pos == 0)
		return (1);
	increase_size_b(t, t->a[0]);
	decrease_size_a(t);
	write (1, "pb\n", 3);
	return (0);
}
