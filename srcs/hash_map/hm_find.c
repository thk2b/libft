/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hm_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 21:34:12 by tkobb             #+#    #+#             */
/*   Updated: 2018/10/22 00:51:54 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash_map.h"
#include "libft.h"

static int	cmp_item(void *v_key, void *v_item)
{
	const char	*key;
	t_hm_item	*item;

	key = (const char *)v_key;
	item = (t_hm_item*)v_item;
	return (ft_strcmp(key, item));
}

void		*hm_find(t_hm *hm, const char *key)
{
	int				index;
	t_llist			*item_container;
	t_llist_node	*node;
	t_hm_item		*item;

	VALIDATE_HASH(index = hm->hash_fn(key), NULL);
	item_container = hm->keys + index;
	MCK(node = llist_find(item_container, key, cmp_item), NULL);
	item = (t_hm_item*)node->data;
	return (item ? item->value : NULL);
}
