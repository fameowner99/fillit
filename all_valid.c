/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:29:46 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/27 15:54:56 by npiriyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terminos.h"
#include "validation.h"
#include "read_and_alloc.h"
#include "all_valid.h"
#include "validation.h"

int		all_valid(char **argv, int *num_term, char ****res)
{
	int			i;
	t_coord		s;
	char		buf[546];
	int			counter;

	i = -1;
	read_file(argv, buf);
	if (first_check(0, num_term, buf))
	{
		*res = create_array(*num_term);
		fill_array(*res, *num_term, buf);
		while (++i < *num_term)
		{
			s.x = 0;
			s.y = 0;
			find_first_hash(&s.y, &s.x, i, *res);
			counter = 0;
			if (!check_position(s, i, *res, &counter))
				return (0);
		}
	}
	else
		return (0);
	return (1);
}

int		my_exception(t_coord s, char ***res, int t)
{
	t_coord s1;

	s1.x = 0;
	s1.y = 0;
	find_first_hash2(&s1.y, &s1.x, t, res);
	if (res[t][s1.x][s1.y + 1] == '#' && res[t][s1.x][s1.y + 2] == '#' &&
			s1.x != s.x && s1.y != s.y)
		return (1);
	else if (s1.y < 3 && res[t][s1.x][s1.y + 1] == '#' && s1.x < 3 &&
		res[t][s1.x + 1][s1.y] == '#' && s1.x != s.x && s.y != s1.y)
		return (1);
	return (0);
}
