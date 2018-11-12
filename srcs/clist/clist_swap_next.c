/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_swap_next.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 23:17:45 by tkobb             #+#    #+#             */
/*   Updated: 2018/11/11 23:29:55 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <clist.h>

int		clist_swap_next(t_clist **cl)
{
	void	*tmp;

	tmp = (*cl)->data;
	(*cl)->data = (*cl)->next->data;
	(*cl)->next->data = tmp;
	return (0);
}
