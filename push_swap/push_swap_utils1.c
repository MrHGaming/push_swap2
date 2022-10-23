/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:27:23 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/22 20:40:25 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_atoi(const char *str, t_stack *a, int x)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] && str[i] <= 32 && str[i] != 27)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i++] - 48;
		if (result * sign > 2147483647)
			return (0);
		if (result * sign < -2147483648)
			return (0);
	}
	a->intarray[x] = result * sign;
	return (1);
}

int	check_duplicates(t_stack *a, int c)
{
	int	x;
	int	y;

	x = 0;
	while (x < (c - 1))
	{
		y = x + 1;
		while (y < c)
		{
			if (a->intarray[x] == a->intarray[y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	check_sorted(t_stack *a, int c)
{
	int	x;

	x = 0;
	while (x < (c - 1))
	{
		if (a->intarray[x] > a->intarray[x + 1])
			return (0);
		x++;
	}
	return (1);
}

int	check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	check_arguments(char **av)
{
	int	i;
	int	x;

	i = 1;
	while (av[i] != 0)
	{
		x = 0;
		if (av[i][x] == '\0')
			return (0);
		while (av[i][x] != '\0')
		{
			if (!ft_isdigit(av[i][x]) && (av[i][x] != '+'
				&& av[i][x] != '-' && av[i][x] != 32))
				return (0);
			x++;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{
		if (!check_digit(av[i++]))
			return (0);
	}
	return (1);
}
