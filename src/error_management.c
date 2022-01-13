/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:14:09 by rohoarau          #+#    #+#             */
/*   Updated: 2022/01/13 14:49:38 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

void	check_not_sorted(t_tab *t)
{
	int	i;
	int	j;
	int	check;

	i = -1;
	check = 0;
	while (++i < t->pos)
	{
		j = i + 1;
		if (t->tab[i] < t->tab[j] || t->tab[j] == t->tab[0] || t->tab[j] == 0)
			check++;
		while (j < t->pos)
		{
			if (t->tab[i] == t->tab[j])
				exit (printf("Error\n"));
			j++;
		}
	}
	if (check == t->pos)
		exit (printf("Error\n"));
}

void	create_tab1(char **argv, t_tab *t)
{
	char	**str;

	str_is_digit(argv[1]);
	if (!ft_strchr(argv[1], ' '))
		exit (printf("Solved: 0 iterations\n"));
	str = ft_split(argv[1], ' ');
	if (!str)
		exit (0);
	while (str[++t->pos])
		;
	t->tab = malloc(sizeof(int) * t->pos);
	if (!t->tab)
		exit (0);
	t->pos = -1;
	while (str[++t->pos])
	{
		t->tab[t->pos] = ft_atoi(str[t->pos]);
		free(str[t->pos]);
	}
	free(str);
}

void	create_tab2(int argc, char **argv, t_tab *t)
{
	t->tab = malloc(sizeof(int) * (argc - 1));
	if (!t->tab)
		exit (0);
	while (++t->pos < argc - 1)
	{
		str_is_digit(argv[t->pos + 1]);
		t->tab[t->pos] = ft_atoi(argv[t->pos + 1]);
	}
}
