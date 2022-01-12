/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 10:27:54 by rohoarau          #+#    #+#             */
/*   Updated: 2022/01/11 20:16:10 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		tab[];
	char	**str;

	if (argc < 2)
		return (printf("2 or more arguments please\n"));
	if (argc == 2)
	{
		str_is_digit(argv[1]);
		if (!ft_strchr(argv[1], ' '))
			return (printf("Solved: 0 iterations\n"));
		str = ft_split(argv[1], ' ');
		if (!str)
			return (0);
		i = -1;
		while (str[++i])
		{
			tab[i] = ft_atoi(str[i]);
			//printf("tab[%d]: |%d|\n", i, tab[i]);
			free(str[i]);
			//check_duplicate(tab, i);
		}
		free(str);
		//algo
	}
	if (argc > 2)
	{
		i = -1;
		while (++i < argc - 1)
		{
			str_is_digit(argv[i + 1]);
			tab[i] = ft_atoi(argv[i + 1]);
			//printf("tab[%d]: |%d|\n", i, tab[i]);
			//check_duplicate(tab, i);
		}
	}
	check_not_sorted(tab, i);
	//if (tab[i])
	//	algo
	return (0);
}
