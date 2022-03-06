/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:35:19 by rohoarau          #+#    #+#             */
/*   Updated: 2022/03/03 16:52:32 by rohoarau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_tab(t_tab *t, char **s, int argc)
{
	int	len;

	len = -1;
	while (s[++len])
		;
	if (argc > 2)
	{
		t->pos = -1;
		while (++t->pos < len)
			s[t->pos] = s[t->pos + 1];
		len--;
	}
	t->a = (long *)malloc(sizeof(long) * len);
	if (!t->a)
		exit (0);
	t->pos = -1;
	while (++t->pos < len)
	{
		str_is_digit(s[t->pos], t);
		t->a[t->pos] = ft_atoi_modified(s[t->pos], t);
		if (argc == 2)
			free(s[t->pos]);
	}
	if (argc == 2)
		free(s);
}

void	ft_free_tab(t_tab *t)
{
	free(t->a);
	exit (write(2, "Error\n", 6));
}

static void	min_max_int(long nb, t_tab *t, int sign)
{
	if ((nb * sign) > 2147483647 || (nb * sign) < -2147483648)
	{
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
