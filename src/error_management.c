/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:14:09 by rohoarau          #+#    #+#             */
/*   Updated: 2022/01/11 20:10:40 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_not_sorted(int *tab, int len)
{
	int	i;
	int	j;
	int	check;

	i = -1;
	check = 0;
	while (++i < len)
	{
		j = i + 1;
		if (tab[i] < tab[j] || tab[j] == tab[0] || tab[j] == 0)
			check++;
		while (j < len)
		{
			if (tab[i] == tab[j])
				exit (printf("Error\n"));
			j++;
		}
	}
	if (check == len)
		exit (printf("Error\n"));
}

void	str_is_digit(char *s)
{
	int	d;
	int	i;

	i = 0;
	d = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]) == 0)
		{
			if (s[i] != ' ')
				exit (printf("Error\n"));
			d++;
		}
		i++;
	}
	if (d == i)
		exit (printf("Error\n"));
}
