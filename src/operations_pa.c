/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:45:17 by rohoarau          #+#    #+#             */
/*   Updated: 2022/03/03 13:35:29 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	increase_size_a(t_tab *t, int save)
{
	int	i;

	if (t->pos == 0)
	{
		t->pos = 1;
		t->a[0] = save;
		return ;
	}
	t->pos += 1;
	i = t->pos;
	while (i > 0)
	{
		t->a[i] = t->a[i - 1];
		i--;
	}
	t->a[i] = save;
}

void	decrease_size_b(t_tab *t)
{
	int	i;

	if (!t->b)
		return ;
	t->posb -= 1;
	i = -1;
	while (++i < t->posb)
		t->b[i] = t->b[i + 1];
}

int	pa(t_tab *t)
{
	if (t->posb == 0)
		return (1);
	increase_size_a(t, t->b[0]);
	decrease_size_b(t);
	write (1, "pa\n", 3);
	return (0);
}
