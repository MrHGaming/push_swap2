/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:50:47 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/23 20:59:47 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *b, t_stack *a)
{
	int		i;
	t_stack	c;

	if (a->size > 0)
	{
		a->size -= 1;
		b->size += 1;
		i = -1;
		c.size = b->size + 1;
		c.intarray = (int *)malloc(sizeof(int) * c.size);
		c.intarray[0] = a->intarray[0];
		while (++i < b->size)
			c.intarray[i + 1] = b->intarray[i];
		copy_int(b, &c);
		free(c.intarray);
		i = -1;
		c.intarray = (int *)malloc(sizeof(int) * (a->size));
		while (++i < (a->size))
			c.intarray[i] = a->intarray[i + 1];
		copy_int(a, &c);
		free(c.intarray);
		ft_printf("pb\n");
	}
}

void	ra(t_stack *a)
{
	int	i;
	int	x;

	x = a->intarray[0];
	i = 0;
	while (i < a->size)
	{
		a->intarray[i] = a->intarray[i + 1];
		i++;
	}
	a->intarray[a->size - 1] = x;
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	int	i;
	int	x;

	x = b->intarray[0];
	i = 0;
	while (i < b->size)
	{
		b->intarray[i] = b->intarray[i + 1];
		i++;
	}
	b->intarray[b->size - 1] = x;
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	int	i;
	int	x;

	x = a->intarray[0];
	i = 0;
	while (i < a->size)
	{
		a->intarray[i] = a->intarray[i + 1];
		i++;
	}
	a->intarray[a->size - 1] = x;
	i = 0;
	x = b->intarray[0];
	i = 0;
	while (i < b->size)
	{
		b->intarray[i] = b->intarray[i + 1];
		i++;
	}
	b->intarray[b->size - 1] = x;
	ft_printf("rr\n");
}

void	rra(t_stack *a)
{
	int	i;
	int	x;

	x = a->intarray[a->size - 1];
	i = a->size;
	while (i > 0)
	{
		a->intarray[i] = a->intarray[i - 1];
		i--;
	}
	a->intarray[0] = x;
	ft_printf("rra\n");
}
