/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils7.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:52:13 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/23 18:54:38 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5_2(t_stack *a, t_stack *b)
{
	if (a->intarray[2] < a->intarray[0] && a->intarray[2] < a->intarray[1]
		&& a->intarray[2] < a->intarray[3] && a->intarray[2] < a->intarray[4])
	{
		ra(a);
		sa(a);
		pb(b, a);
		sort_4(a, b);
		pa(b, a);
	}
	else if (a->intarray[3] < a->intarray[0] && a->intarray[3] < a->intarray[1]
		&& a->intarray[3] < a->intarray[2] && a->intarray[3] < a->intarray[4])
	{
		rra(a);
		rra(a);
		pb(b, a);
		sort_4(a, b);
		pa(b, a);
	}
	else
	{
		rra(a);
		pb(b, a);
		sort_4(a, b);
		pa(b, a);
	}
}
