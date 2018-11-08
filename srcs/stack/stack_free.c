/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:20:40 by theo              #+#    #+#             */
/*   Updated: 2018/11/08 15:45:43 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>
#include <libft.h>

void	stack_free(t_stack *s, t_stack_del_fn del)
{
	t_stack	*cur;
	t_stack	*next;

	if (del == NULL)
		del = free;
	cur = s;
	while (cur)
	{
		next = cur->next;
		del(cur);
		free(cur);
		cur = next;
	}
}
