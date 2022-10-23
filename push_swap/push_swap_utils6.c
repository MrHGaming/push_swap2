/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils6.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:51:58 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/23 18:51:58 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_3d_char(char ***array)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (array[x] != 0)
	{
		while (array[x][y] != 0)
			free (array[x][y++]);
		free (array[x++]);
	}
	free (array);
}

void	copy_int2(t_stack *c, t_stack *a)
{
	int	i;

	i = 0;
	c->intarray = (int *)malloc(sizeof(int) * (a->size));
	while (i < a->size)
	{
		c->intarray[i] = a->intarray[i];
		i++;
	}
}

void	push_first_100(t_stack *a, t_stack *b, t_stack *c, int p, int l)
{
	a->i = 0;
	while (a->i <= l)
	{
		a->x = 0;
		a->z = a->tmpsize;
		while (a->intarray[a->x] > c->intarray[p])
			a->x++;
		while (a->intarray[a->z] > c->intarray[p])
			a->z--;
		a->h = a->tmpsize - a->z;
		a->tmp = a->intarray[a->x];
		if (a->x <= a->h)
			while (a->x-- > 0)
				ra(a);
		else
			while (a->h-- >= 0)
				rra(a);
		pb(b, a);
		a->tmpsize--;
		a->i++;
	}
}

void	push_back_100(t_stack *a, t_stack *b, t_stack *c)
{
	a->i = 99;
	while (a->i >=0)
	{
		a->x = 0;
		a->z = a->i;
		while (b->intarray[a->x] != c->intarray[a->i])
			a->x++;
		a->z = a->i - a->x;
		if (a->x < a->z)
		{
			while (b->intarray[0] != c->intarray[a->i])
				rb(b);
		}
		else
		{
			while (b->intarray[0] != c->intarray[a->i])
				rrb(b);
		}
		pa(b, a);
		a->i--;
	}
}

void	push_back_500(t_stack *a, t_stack *b, t_stack *c)
{
	a->i = 499;
	while (a->i >=0)
	{
		a->x = 0;
		a->z = a->i;
		while (b->intarray[a->x] != c->intarray[a->i])
			a->x++;
		a->z = a->i - a->x;
		if (a->x < a->z)
		{
			while (b->intarray[0] != c->intarray[a->i])
				rb(b);
		}
		else
		{
			while (b->intarray[0] != c->intarray[a->i])
				rrb(b);
		}
		pa(b, a);
		a->i--;
	}
}
