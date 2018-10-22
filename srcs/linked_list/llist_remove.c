/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 22:46:13 by tkobb             #+#    #+#             */
/*   Updated: 2018/10/22 01:34:39 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

int		llist_remove(t_llist *head, void *ctx,
	t_llist_cmp_fn cmp, t_llist_del_fn del)
{
	t_llist_node	*node;
	t_llist_node	*prev;
	t_llist_node	*next;

	prev = NULL;
	node = head->first;
	while (node)
	{
		next = node->next;
		if (cmp(ctx, node->data))
		{
			if (prev == NULL)
				head->first = next;
			else if (node == head->last)
				head->last = prev;
			else
				prev->next = next;
			del(node);
			head->len--;
			return (0);
		}
		else
		{
			prev = node;
			node = node->next;
		}
	}
	return (1);
}
