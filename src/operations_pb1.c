/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:45:17 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/01 16:30:26 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	pb(t_tab *t)
{
	int	save;

	if (t->pos == 0)
		return (1);
	save = t->tab[0];
	t->tab = decrease_size_a(t);
	t->tabb = increase_size_b(t, save);
	write (1, "pb\n", 3);
	//ft_print_tab(t);
	return (0);
}

int	*decrease_size_a(t_tab *t)
{
	int	i;

	if (!t->tab)
		return (NULL);
	t->pos -= 1;
	t->tmp = malloc(sizeof(int) * t->pos);
	if (!t->tmp)
		return (NULL);
	i = -1;
	while (++i < t->pos)
		t->tmp[i] = t->tab[i + 1];
	free(t->tab);
	return (t->tmp);
}

int	*increase_size_b(t_tab *t, int save)
{
	int	i;

	if (!t->tabb)
	{
		t->posb = 1;
		t->tmp = malloc(sizeof(int) * t->posb);
		if (!t->tmp)
			return (NULL);
		t->tmp[0] = save;
		return (t->tmp);
	}
	t->posb += 1;
	t->tmp = malloc(sizeof(int) * t->posb);
	if (!t->tmp)
		return (NULL);
	i = -1;
	t->tmp[0] = save;
	while (++i < t->posb)
		t->tmp[i + 1] = t->tabb[i];
	free(t->tabb);
	return (t->tmp);
}
