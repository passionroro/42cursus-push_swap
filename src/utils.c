/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:35:19 by rohoarau          #+#    #+#             */
/*   Updated: 2022/02/14 18:23:48 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_tab_1(int argc, char **argv, t_tab *t)
{
	char	**str;

	str_is_digit(argv[1], argc, t);
	if (!ft_strchr(argv[1], ' '))
		exit (0);
	str = ft_split(argv[1], ' ');
	if (!str)
		exit (0);
	while (str[++t->pos])
		;
	t->a = (long *)malloc(sizeof(long) * t->pos);
	if (!t->a)
		exit (0);
	t->pos = -1;
	while (str[++t->pos])
	{
		t->a[t->pos] = ft_atoi_modified(str[t->pos], t);
		free(str[t->pos]);
	}
	free(str);
}

void	create_tab_2(int argc, char **argv, t_tab *t)
{
	t->a = (long *)malloc(sizeof(long) * (argc - 1));
	if (!t->a)
		exit (0);
	t->pos = -1;
	while (++t->pos < argc - 1)
	{
		str_is_digit(argv[t->pos + 1], argc, t);
		t->a[t->pos] = ft_atoi_modified(argv[t->pos + 1], t);
	}
}

void	ft_free_tab(t_tab *t)
{
	if (t->a)
	{
		t->a = NULL;
		free(t->a);
	}
	if (t->b)
	{
		t->b = NULL;
		free(t->b);
	}
	exit (0);
}

static void	min_max_int(long nb, t_tab *t, int sign)
{
	if ((nb * sign) > 2147483647 || (nb * sign) < -2147483648)
	{
		t->a = NULL;
		free(t->a);
		exit (write(2, "Error\n", 6));
	}
}

int	ft_atoi_modified(const char *str, t_tab *t)
{
	long	nb;
	int		i;
	int		sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' \
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i++] - '0';
		min_max_int(nb, t, sign);
	}
	return (nb * sign);
}
/*
void	ft_print_tab(t_tab *t)
{
	int	i;

	i = -1;
	if (t->a)
		while (++i < t->pos)
			printf("A[%d]: |%ld|\n", i, t->a[i]);
	i = -1;
	printf("-----------\n");
	if (t->b)
		while (++i < t->posb)
			printf("B[%d]: |%ld|\n", i, t->b[i]);
	printf("\n");
}*/
