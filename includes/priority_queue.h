/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priority_queue.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:49:23 by tkobb             #+#    #+#             */
/*   Updated: 2018/10/22 19:03:37 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIORITY_QUEUE_H
# define PRIORITY_QUEUE_H
# include "linked_list.h"

typedef struct	s_pq
{
	void	*data;
	s_pq	*next;
}				t_pq;

int				pq_add(t_pq **pq, void *data);
void			*pq_get_min(t_pq *pq);
void			*pq_get_max(t_pq *pq);
void			*pq_pop_min(t_pq *pq);
void			*pq_pop_max(t_pq *pq);

#endif
