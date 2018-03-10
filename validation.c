/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:41:01 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/27 15:51:19 by npiriyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terminos.h"
#include "all_valid.h"
#include "figure.h"

int		check_term(int *i, char *buf)
{
	int	j;
	int count;
	int c;
	int k;

	k = 0;
	c = 0;
	j = 0;
	count = 0;
	while (j++ < 20 && buf[*i])
	{
		if ((buf[*i] != '.' && buf[*i] != '#' && c < 4)
				|| (c++ == 4 && buf[*i] != '\n'))
			return (0);
		if (buf[(*i)++] == '#')
			++count;
		if (c > 4)
		{
			++k;
			c = 0;
		}
	}
	if (count != 4 || k != 4)
		return (0);
	return (1);
}

/*
 ** return true if tetriminos contain only '.'
 ** or '#' (and check if number of '#' equal 4,
*/

/*
 ** if not 4 then return false)
 ** check that every end of the line has \n
*/

/*
 ** if last tetrimino has \n after it - return false(0)
*/

int		first_check(int i, int *g_n, char *buf)
{
	if (!check_term(&i, buf))
		return (0);
	++*g_n;
	if (*g_n > 26)
	{
		return (0);
	}
	if (buf[i] == '\n')
	{
		++i;
		if (buf[i])
			return (first_check(i, g_n, buf));
		else
			return (0);
	}
	else
	{
		if (!buf[i])
			return (1);
	}
	return (0);
}

void	find_first_hash(int *c, int *l, int t, char ***res)
{
	while (*l < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (res[t][*l][*c] == '#')
				return ;
			++*c;
		}
		++*l;
	}
}

void	find_first_hash2(int *c, int *l, int t, char ***res)
{
	while (*c < 4)
	{
		*l = 0;
		while (*l < 4)
		{
			if (res[t][*l][*c] == '#')
				return ;
			++*l;
		}
		++*c;
	}
}

int		check_position(t_coord s, int t, char ***res, int *counter)
{
	t_coord s1;

	if (s.y > 3 || s.x > 3)
		return (0);
	if (res[t][s.x][s.y] == '#')
	{
		++*counter;
		check_position(move(s, "right"), t, res, counter);
		check_position(move(s, "down"), t, res, counter);
	}
	if (*counter >= 4)
		return (1);
	if (*counter == 3)
	{
		s1.x = 0;
		s1.y = 0;
		find_first_hash2(&s1.y, &s1.x, t, res);
		if (res[t][s1.x][s1.y + 1] == '#' && s1.x != s.x && s1.y != s.y)
			return (1);
	}
	if (*counter == 2)
		return (my_exception(s, res, t));
	return (0);
}
