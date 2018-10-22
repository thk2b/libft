/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hm_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 21:20:40 by tkobb             #+#    #+#             */
/*   Updated: 2018/10/21 22:37:38 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash_map.h"
#include "libft.h"

int		hm_insert(t_hm *hm, const char *key, void *value)
{
	int			index;
	t_llist		*item_container;
	t_hm_item	*item;

	VALIDATE_HASH(index = hm->hash_fn(key), 1);
	item_container = hm->keys + index;
	MCK(item = hm_new_item(key, value), 1);
	llist_push(&item_container, (void*)item);
	return (0);
}
