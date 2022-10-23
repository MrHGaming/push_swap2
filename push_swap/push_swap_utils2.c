/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:53:20 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/23 21:01:55 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	i;

	i = a->intarray[0];
	a->intarray[0] = a->intarray[1];
	a->intarray[1] = i;
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	int	i;

	i = b->intarray[0];
	b->intarray[0] = b->intarray[1];
	b->intarray[1] = i;
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	int	i;

	i = b->intarray[0];
	b->intarray[0] = b->intarray[1];
	b->intarray[1] = i;
	i = a->intarray[1];
	a->intarray[0] = a->intarray[1];
	a->intarray[1] = i;
	ft_printf("ss\n");
}

void	pa(t_stack *b, t_stack *a)
{
	int		i;
	t_stack	c;

	if (b->size > 0)
	{
		b->size -= 1;
		a->size += 1;
		i = -1;
		c.size = a->size;
		c.intarray = (int *)malloc(sizeof(int) * c.size);
		c.intarray[0] = b->intarray[0];
		while (++i < a->size)
			c.intarray[i + 1] = a->intarray[i];
		copy_int(a, &c);
		free(c.intarray);
		i = -1;
		c.intarray = (int *)malloc(sizeof(int) * (b->size));
		while (++i < (b->size))
			c.intarray[i] = b->intarray[i + 1];
		copy_int(b, &c);
		ft_printf("pa\n");
	}
}

void	push_swap(t_stack *a)
{
	t_stack	b;
	int		x;

	b.intarray = (int *)malloc(sizeof(int) * a->size);
	b.size = 0;
	x = a->size;
	if (a->size == 2)
		sa(a);
	else if (a->size == 3)
		check_3(a);
	else if (a->size == 4)
		sort_4(a, &b);
	else if (a->size == 5)
		sort_5(a, &b);
	else if (a->size <= 100)
		sort_100(a, &b);
	else if (a->size <= 500)
		sort_500(a, &b);
	free(b.intarray);
}
