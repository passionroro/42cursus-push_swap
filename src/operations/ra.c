/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:58:33 by rohoarau          #+#    #+#             */
/*   Updated: 2022/01/13 16:00:39 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

//Top number goes to the bottom of Stack A

void	ra(t_tab *t)
{
	int	i;
	int	tmp;

	tmp = t->tab[0];
	i = -1;
	while (++i < t.pos)
		t->tab[i] = t->tab[i + 1];
	t->tab[t.pos - 1] = tmp;
}
