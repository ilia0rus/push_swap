/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusujio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:07:48 by gusujio           #+#    #+#             */
/*   Updated: 2019/12/02 16:07:52 by gusujio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft/libft.h"

typedef struct          s_spisok
{
	int                 num;
	int                 weight;
	struct s_spisok     *next;
	struct s_spisok     *back;
}                       t_spisok;

typedef struct          s_stack
{
	int                 *mas_a;
	struct s_spisok     *ar_a;
	struct s_spisok     *ar_b;
	int                 *mas_b;
	int                 size_a;
	int                 size_b;
	int                 head_a;
	int                 head_b;
	int                 tail_a;
	int                 tail_b;
}                       t_stack;

void                    sa(t_stack **st);
void                    sb(t_stack **st);
void                    pa(t_stack **st);
void                    pb(t_stack **st);
void                    ra(t_stack **st);
void                    rb(t_stack **st);
void                    rra(t_stack **st);
void                    rrb(t_stack **st);
void                    ss(t_stack **st);
void                    rr(t_stack **st);
void                    rrr(t_stack **st);
int                     norm(t_stack *ili);
void                    checker(t_stack *ili);
t_stack                 *ft_error(int argc, char **argv);
void                    push_swap(t_stack *ili);
void                    weight(int *ar, t_spisok as[]);
#endif