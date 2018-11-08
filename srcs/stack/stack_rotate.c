/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:37:34 by theo              #+#    #+#             */
/*   Updated: 2018/11/08 15:43:31 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

/*
**	first element becomes the last
*/

int		stack_rotate(t_stack **s)
{
	t_stack	*top;
	t_stack	*bottom;

	if (*s == NULL || (*s)->next == NULL)
		return (0);
	top = *s;
	while (bottom->next)
	{
		bottom = bottom->next;
	}
	bottom->next = top;
	top->next = NULL;
	*s = bottom;
	return (0);
}
