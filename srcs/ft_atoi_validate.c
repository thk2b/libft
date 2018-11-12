/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_validate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 00:44:57 by tkobb             #+#    #+#             */
/*   Updated: 2018/11/12 00:48:56 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_validate(int *error, const char *s)
{
	int		sign;
	long	new_n;
	long	n;

	sign = 1;
	n = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n'
		|| *s == '\v' || *s == '\r' || *s == '\f')
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			return ((*error = 1));
		if ((new_n = 10 * n + *s++ - '0') >= n)
			n = new_n;
		else
			return (sign == 1 ? -1 : 0);
	}
	*error = 0;
	return ((int)(n * sign));
}
