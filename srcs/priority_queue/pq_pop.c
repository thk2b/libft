/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:34:02 by tkobb             #+#    #+#             */
/*   Updated: 2018/10/22 23:56:30 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "priority_queue.h"

void	*pq_pop(t_pq **pq, t_pq_del_fn del)
{
	t_pq	*ret;
	void	*data;

	ret = *pq;
	if (ret == NULL)
		return (NULL);
	*pq = ret->next;
	data =ret->data;
	del(ret);
	return (data);
}
