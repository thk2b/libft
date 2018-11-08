/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:15:41 by theo              #+#    #+#             */
/*   Updated: 2018/11/08 13:47:36 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include <stdlib.h>

typedef struct	s_stack
{
	
}				t_stack;

typedef int		(*t_stack_cmp_fn)(void *a, void *b);

int				stack_new(t_stack **s);
int				stack_push(t_stack **s, void *data);
void			*stack_pop(t_stack *s);

int				stack_is_sorted(t_stack *s, t_stack_cmp_fn fn);

#endif
