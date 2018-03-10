/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:38:13 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/27 15:59:53 by npiriyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_valid.h"
#include "terminos.h"
#include "algorithm.h"

int		main(int argc, char **argv)
{
	int		num_term;
	char	***res;

	res = NULL;
	num_term = 0;
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	if (all_valid(argv, &num_term, &res))
		helper(num_term, res);
	else
	{
		ft_putstr("error\n");
		return (1);
	}
	return (0);
}
