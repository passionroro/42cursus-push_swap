/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:58:49 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/01 16:12:40 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	smallest_pos(t_tab *t)
{
	int	i;
	int	min;
	int	pos;

	i = -1;
	pos = 0;
	min = t->tab[pos];
	while (++i < t->pos)
	{
		if (t->tab[i] < min)
		{
			min = t->tab[i];
			pos = i;
		}
	}
	return (pos);
}

/*
int	biggest_group(t_tab *t)
{
	int	i;
	int	max;
	int	len;

	i = -1;
	max = t->tab[0];
	while (++i < t->pos)
		if (t->tab[i] > max)
			max = t->tab[i];
	len = 0;
	if (max == -2147483648)
		return (11);
	if (max <= 0)
	{
		len++;
		max *= -1;
	}
	while (max > 0)
	{
		max /= 10;
		len++;
	}
	return (len);
}
void	sort_allocation(t_tab *t, int mod, int rem)
{
	int	i;
	int	j;

	t->sort = (int **)malloc(sizeof(int *) * 10);
	if (!t->sort)
		return ;
	t->size = (int *)malloc(sizeof(int) * 10);
	if (!t->size)
		return ;
	j = -1;
	while (++j < 10)
		t->size[j] = 0;
	i = -1;
	while (++i < t->pos)
		t->size[t->tab[i] % mod / rem] += 1;
	j = -1;
	while (++j < 10)
		t->sort[j] = malloc(sizeof(int) * t->size[j]);
}

void	sort_free(t_tab *t)
{
	int	j;

	j = -1;
	free(t->size);
	while (++j < 10)
	{
		free(t->sort[j]);
		t->sort[j] = NULL;
	}
	free(t->sort);
}
int	my_algorithm(t_tab *t)
{
	int	i;
	int	j;
	int	mod;
	int	rem;
	int	groups;

	groups = 0;
	while (groups++ < biggest_group(t))
	{
		mod = ft_recursive_power(10, groups);
		rem = ft_recursive_power(10, groups - 1);
		sort_allocation(t, mod, rem);
		i = -1;
		while (++i < t->pos)
		{
			j = 0;
			while (t->sort[t->tab[i] % mod / rem][j])
				j++;
			t->sort[t->tab[i] % mod / rem][j] = t->tab[i];
			printf("TAB[%d][%d]: |%d|\n", t->tab[i] % mod / rem, j, t->sort[t->tab[i] % mod / rem][j]);
		}
		printf("\n");
		sort_free(t);
	}
	return (0);
}

int	algorithm100(t_tab *t)
{
	int	i;
	int	min_pos;

	while (t->pos)
	{
		min_pos = smallest_pos(t);
		i = -1;
		if (min_pos >= t->pos / 2)
			while (min_pos++ < t->pos)
				rra(t);
		else
			while (++i < min_pos)
				ra(t);
		pb(t);
	}
	while (t->posb)
		pa(t);
	return (0);
}

int	chunk_finder(t_tab *t)
{
	int	ret;

	ret = 1;
	while (t->pos / ret > 10)
		ret++;
	return (ret);
}*/
