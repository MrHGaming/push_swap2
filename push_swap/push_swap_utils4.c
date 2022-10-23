/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:30:09 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/23 17:12:30 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack *b)
{
	int	i;
	int	x;

	x = b->intarray[b->size - 1];
	i = b->size;
	while (i > 0)
	{
		b->intarray[i] = b->intarray[i - 1];
		i--;
	}
	b->intarray[0] = x;
	ft_printf("rrb\n");
}

void	rrr(t_stack *b, t_stack *a)
{
	int	i;
	int	x;

	x = b->intarray[b->size - 1];
	i = b->size;
	while (i > 0)
	{
		b->intarray[i] = b->intarray[i - 1];
		i--;
	}
	b->intarray[0] = x;
	x = a->intarray[a->size - 1];
	i = a->size;
	while (i > 0)
	{
		a->intarray[i] = a->intarray[i - 1];
		i--;
	}
	a->intarray[0] = x;
	ft_printf("rrr\n");
}

void	check_3(t_stack *a)
{
	if (a->intarray[0] > a->intarray[1] && a->intarray[1] > a->intarray[2])
	{
		ra(a);
		sa(a);
	}
	else if (a->intarray[0] > a->intarray[1] && a->intarray[0] < a->intarray[2]
		&& a->intarray[1] < a->intarray[2])
		sa(a);
	else if (a->intarray[0] > a->intarray[1] && a->intarray[0] > a->intarray[2]
		&& a->intarray[1] < a->intarray[2])
		ra(a);
	else if (a->intarray[0] < a->intarray[1] && a->intarray[0] < a->intarray[2]
		&& a->intarray[1] > a->intarray[2])
	{
		sa(a);
		ra(a);
	}
	else
	{
		rra(a);
	}
}

void	copy_int(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	a->intarray = (int *)malloc(sizeof(int) * (a->size + 1));
	while (i < a->size)
	{
		a->intarray[i] = b->intarray[i];
		i++;
	}
}

void	sort_4(t_stack *a, t_stack *b)
{
	if (a->intarray[0] < a->intarray[1] && a->intarray[0] < a->intarray[2]
		&& a->intarray[0] < a->intarray[3])
	{
		pb(b, a);
		check_3(a);
		pa(b, a);
	}
	else if (a->intarray[1] < a->intarray[0] && a->intarray[1] < a->intarray[2]
		&& a->intarray[1] < a->intarray[3])
	{
		sa(a);
		pb(b, a);
		check_3(a);
		pa(b, a);
	}
	else
		sort_4_2(a, b);
}