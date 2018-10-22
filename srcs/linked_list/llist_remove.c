/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 22:46:13 by tkobb             #+#    #+#             */
/*   Updated: 2018/10/21 22:47:47 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

int		llist_remove(t_llist *head, void *ctx,
	t_llist_cmp_fn cmp, t_llist_del_fn del)
{
	t_llist_node	*node;

	node = head->first;
	while (node)
		if (cmp(ctx, node->data))
		{
			del(node);
			return (0);
		}
		else
			node = node->next;
	return (1);
}
