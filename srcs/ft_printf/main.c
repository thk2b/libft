/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkobb <tkobb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:19:51 by tkobb             #+#    #+#             */
/*   Updated: 2018/11/07 20:22:26 by tkobb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include "libft/includes/libft.h"
#include "ft_printf.h"

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	for (int i = 0; i < 100; i++)
		ft_printf("%d %s %O %p", i, NULL, i, i, NULL);
		while (1);
	return (0);
}
