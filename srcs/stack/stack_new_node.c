/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:18:23 by theo              #+#    #+#             */
/*   Updated: 2018/11/08 15:19:43 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>
#include <libft.h>

t_stack		*new_stack_node(void *data)
{
	t_stack	*s;

	MCK(s = (t_stack*)malloc(sizeof(t_stack)), NULL);
	s->data = data;
	s->next = NULL;
	return (s);
}
