/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:56:00 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/23 19:56:52 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	g;
	int	tmp;
	int	tmpsize;

	tmpsize = size - 1;
	g = 0;
	while (g < tmpsize)
	{
		if (tab[g] > tab[g + 1])
		{
			tmp = tab[g + 1];
			tab[g + 1] = tab [g];
			tab [g] = tmp;
			g = 0;
		}
		else
			g++;
	}
}

void	sort_4_2(t_stack *a, t_stack *b)
{
	if (a->intarray[2] < a->intarray[0] && a->intarray[2] < a->intarray[1]
		&& a->intarray[2] < a->intarray[3])
	{
		ra(a);
		sa(a);
		pb(b, a);
		check_3(a);
		pa(b, a);
	}
	else
	{
		rra(a);
		pb(b, a);
		check_3(a);
		pa(b, a);
	}
}

void	sort_5(t_stack *a, t_stack *b)
{
	if (a->intarray[0] < a->intarray[1] && a->intarray[0] < a->intarray[2]
		&& a->intarray[0] < a->intarray[3] && a->intarray[0] < a->intarray[4])
	{
		pb(b, a);
		sort_4(a, b);
		pa(b, a);
	}
	else if (a->intarray[1] < a->intarray[0] && a->intarray[1] < a->intarray[2]
		&& a->intarray[1] < a->intarray[3] && a->intarray[1] < a->intarray[4])
	{
		sa(a);
		pb(b, a);
		sort_4(a, b);
		pa(b, a);
	}
	else
		sort_5_2(a, b);
}

void	sort_100(t_stack *a, t_stack *b)
{
	t_stack	c;

	copy_int2(&c, a);
	a->tmpsize = a->size;
	ft_sort_int_tab(c.intarray, a->tmpsize);
	a->tmpsize -= 1;
	push_first_100(a, b, &c, 19, 19);
	push_first_100(a, b, &c, 39, 19);
	push_first_100(a, b, &c, 59, 19);
	push_first_100(a, b, &c, 79, 19);
	push_first_100(a, b, &c, 99, 19);
	push_back_100(a, b, &c);
}

void	sort_500(t_stack *a, t_stack *b)
{
	t_stack	c;

	copy_int2(&c, a);
	a->tmpsize = a->size;
	ft_sort_int_tab(c.intarray, a->tmpsize);
	a->tmpsize -= 1;
	push_first_100(a, b, &c, 49, 49);
	push_first_100(a, b, &c, 99, 49);
	push_first_100(a, b, &c, 149, 49);
	push_first_100(a, b, &c, 199, 49);
	push_first_100(a, b, &c, 249, 49);
	push_first_100(a, b, &c, 299, 49);
	push_first_100(a, b, &c, 349, 49);
	push_first_100(a, b, &c, 399, 49);
	push_first_100(a, b, &c, 449, 49);
	push_first_100(a, b, &c, 474, 24);
	push_first_100(a, b, &c, 499, 24);
	push_back_500(a, b, &c);
	free(c.intarray);
}
