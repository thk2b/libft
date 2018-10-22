/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_hm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 00:28:08 by tkobb             #+#    #+#             */
/*   Updated: 2018/10/22 00:42:57 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash_map.h"
#include "libft.h"

static void	test0(void)
{
	t_hm	*hm;
	char	**strv;

	strv = ft_strsplit("abc def ghi jkl mno", ' ');
	hm = hm_new(10, NULL);
	hm_insert(hm, "1", strv[0]);
	hm_insert(hm, "2", strv[1]);
	// hm_insert(hm, "3", strv[2]);
	// hm_insert(hm, "4", strv[3]);
	// hm_insert(hm, "4", strv[4]);
}

void		test_hm(void)
{
	test0();
}
