/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:14:52 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/23 19:27:10 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error(t_stack *a)
{
	if (check_duplicates(a, a->size) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	if (check_sorted(a, a->size) == 1)
		return (0);
	return (1);
}

int	ps_check_str(char ***array, t_stack *a)
{
	a->i = 1;
		a->intarray = 0;
	while (array[a->i] != 0)
	{
		a->x = 0;
		while (array[a->i][a->x] != 0)
		{
			if (check_digit(array[a->i][a->x]) == 0)
			{
				return (0);
			}
		a->z = 1;
			while (array[a->i][a->x][a->z] != '\0')
			{
				if (!ft_isdigit(array[a->i][a->x][a->z]))
					return (0);
				a->z++;
			}
			a->size++;
			a->x++;
		}
		a->i++;
	}
	return (1);
}

int	convert_str_int(char ***array, t_stack *a)
{
	a->intarray = (int *)malloc(sizeof(int) * a->size);
	a->i = 1;
	a->z = 0;
	while (array[a->i] != 0)
	{
		a->x = 0;
		while (array[a->i][a->x] != 0)
		{
			if (ps_atoi(array[a->i][a->x++], a, a->z) == 0)
				return (0);
			a->z++;
		}
		a->i++;
	}
	return (1);
}

int	check_input(char **av, t_stack *a, int ac)
{
	char	***array;

	a->i = 1;
	if (check_arguments(av) == 1 && ac > 1)
	{
		array = (char ***)malloc(sizeof(char **) * (ac +1));
		while (a->i < ac)
		{
			array[a->i] = ft_split(av[a->i], ' ');
			a->i++;
		}
		if (ps_check_str(array, a) == 0)
			return (0);
		if (convert_str_int(array, a) == 0)
			return (0);
		free_3d_char(array);
		if (check_error(a) == 0)
			a->c = 2;
	}
	else
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	a;

	if (check_input(av, &a, ac) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	if (a.c == 2)
		return (0);
	push_swap(&a);
	free(a.intarray);
}
