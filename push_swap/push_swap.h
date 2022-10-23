/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohouhou <mohouhou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:13:13 by mohouhou          #+#    #+#             */
/*   Updated: 2022/10/23 18:53:35 by mohouhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>
# include "./Libft/libft.h"

typedef struct s_stack
{
	int	*intarray;
	int	size;
	int	i;
	int	x;
	int	z;
	int	c;
	int	tmpsize;
	int	h;
	int	tmp;
}	t_stack;

int		check_arguments(char **av);
int		ps_atoi(const char *str, t_stack *a, int x);
int		check_duplicates(t_stack *a, int c);
int		check_sorted(t_stack *a, int c);
int		check_digit(char *str);
int		check_error(t_stack *a);
int		ps_check_str(char ***array, t_stack *a);
int		convert_str_int(char ***array, t_stack *a);
int		check_input(char **av, t_stack *a, int ac);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	push_swap(t_stack *a);
void	pa(t_stack *b, t_stack *a);
void	pb(t_stack *b, t_stack *a);
void	pb(t_stack *b, t_stack *a);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *b, t_stack *a);
void	check_3(t_stack *a);
void	sort_4(t_stack *a, t_stack *b);
void	copy_int(t_stack *a, t_stack *b);
void	sort_4_2(t_stack *a, t_stack *b);
void	sort_5(t_stack *a, t_stack *b);
void	sort_100(t_stack *a, t_stack *b);
void	copy_int2(t_stack *a, t_stack *b);
void	free_3d_char(char ***array);
void	push_first_100(t_stack *a, t_stack *b, t_stack *c, int p, int l);
void	push_back_100(t_stack *a, t_stack *b, t_stack *c);
void	push_back_500(t_stack *a, t_stack *b, t_stack *c);
void	sort_500(t_stack *a, t_stack *b);
void	sort_5_2(t_stack *a, t_stack *b);
#endif