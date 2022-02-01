/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:45:17 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/01 16:27:29 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	pa(t_tab *t)
{
	int	save;

	if (t->posb == 0)
		return (1);
	save = t->tabb[0];
	t->tabb = decrease_size_b(t);
	t->tab = increase_size_a(t, save);
	write (1, "pa\n", 3);
//	ft_print_tab(t);
	return (0);
}

int	*decrease_size_b(t_tab *t)
{
	int	i;

	if (!t->tabb)
		return (NULL);
	t->posb -= 1;
	t->tmp = malloc(sizeof(int) * t->posb);
	if (!t->tmp)
		return (NULL);
	i = -1;
	while (++i < t->posb)
		t->tmp[i] = t->tabb[i + 1];
	free(t->tabb);
	return (t->tmp);
}

int	*increase_size_a(t_tab *t, int save)
{
	int	i;

	if (!t->tab)
	{
		t->pos = 1;
		t->tmp = malloc(sizeof(int) * t->pos);
		if (!t->tmp)
			return (NULL);
		t->tmp[0] = save;
		return (t->tmp);
	}
	t->pos += 1;
	t->tmp = malloc(sizeof(int) * t->pos);
	if (!t->tmp)
		return (NULL);
	i = -1;
	t->tmp[0] = save;
	while (++i < t->pos)
		t->tmp[i + 1] = t->tab[i];
	free(t->tab);
	return (t->tmp);
}
