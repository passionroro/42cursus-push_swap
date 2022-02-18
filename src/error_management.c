/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:14:09 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/14 18:23:49 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	str_is_digit(char *s, int argc, t_tab *t)
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
				exit (write(2, "Error\n", 6));
			if (argc > 2)
			{
				if (s[i] == ' ')
				{
					free(t->a);
					exit (write(2, "Error\n", 6));
				}
			}
			d++;
		}
		i++;
	}
	if (d == i)
		exit (write(2, "Error\n", 6));
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
			{
				free(t->a);
				exit (write(2, "Error\n", 6));
			}
			j++;
		}
	}
	if (check == (t->pos - 1))
		ft_free_tab(t);
}
