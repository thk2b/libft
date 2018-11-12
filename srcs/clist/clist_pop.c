/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:55:52 by tkobb             #+#    #+#             */
/*   Updated: 2018/11/11 23:28:49 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <clist.h>

void	*clist_pop(t_clist **cl)
{
	void	*ret;

	if (*cl == NULL)
		return (NULL);
	ret = (*cl)->data;
	if (*cl != (*cl)->next)
	{
		(*cl)->prev->next = (*cl)->next;
		(*cl)->next->prev = (*cl)->prev;
	}
	free(*cl);
	return (ret);
}
