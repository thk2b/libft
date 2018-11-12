/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:59:16 by tkobb             #+#    #+#             */
/*   Updated: 2018/11/11 23:14:25 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <clist.h>

int		clist_push(t_clist **cl, void *data)
{
	t_clist *n;

	MCK(n = clist_new(data), 1);
	if (*cl == NULL)
	{
		n->next = n;
		n->prev = n;
	}
	else
	{
		n->prev = (*cl);
		n->next = (*cl)->next;
		(*cl)->next->prev = n;
		(*cl)->next = n;
	}
	*cl = n;
	return (0);
}
