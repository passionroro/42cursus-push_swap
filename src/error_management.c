/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:14:09 by rohoarau          #+#    #+#             */
/*   Updated: 2022/03/03 16:51:02 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	str_is_digit(char *s, t_tab *t)
{
	int	d;
	int	i;

	i = 0;
	d = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]) == 0)
		{
			if ((s[i] != ' ' && s[i] != '-') || ft_isdigit(s[i + 1]) == 0)
				ft_free_tab(t);
			d++;
		}
		i++;
	}
	if (d == i)
		ft_free_tab(t);
}

void	check_errors(t_tab *t)
{
	int	i;
	int	j;
	int	check;

	i = -1;
	check = 0;
	while (++i < t->pos)
	{
		j = i + 1;
		if ((t->a[i] < t->a[j] || t->a[j] == t->a[0]) && j < t->pos)
			check++;
		while (j < t->pos)
		{
			if (t->a[i] == t->a[j])
				ft_free_tab(t);
			j++;
		}
	}
	if (check == (t->pos - 1))
	{
		free(t->a);
		exit (0);
	}
}
