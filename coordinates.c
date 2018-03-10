/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinates.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 12:51:22 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/24 18:12:42 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terminos.h"
#include "coordinates.h"

void		get_coordinates(char **res, t_coord *arr)
{
	int		num_hash;
	int		i;
	int		j;

	i = 0;
	num_hash = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (res[i][j] == '#')
			{
				arr[num_hash].x = i;
				arr[num_hash++].y = j;
			}
			++j;
			if (num_hash == 4)
			{
				normalize_coordinates(arr);
				return ;
			}
		}
		++i;
	}
}

void		normalize_coordinates(t_coord *arr)
{
	int		i;

	while (arr[0].x > 0 && arr[1].x > 0 && arr[2].x > 0 && arr[3].x > 0)
	{
		i = 0;
		while (i < 4)
			--arr[i++].x;
	}
	while (arr[0].y > 0 && arr[1].y > 0 && arr[2].y > 0 && arr[3].y > 0)
	{
		i = 0;
		while (i < 4)
			--arr[i++].y;
	}
}

int			check_if_fit(t_coord empty, t_figure_point point, t_map map, int j)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if ((empty.x + point.figure[j][i].x) > map.smallest_size - 1
			|| (empty.y + point.figure[j][i].y) > map.smallest_size - 1)
			return (0);
		++i;
	}
	i = 0;
	while (i < 4)
	{
		if (map.square[empty.x + point.figure[j][i].x][empty.y +
			point.figure[j][i].y] != '.')
			return (0);
		++i;
	}
	return (1);
}

/*
 ** j - number of figure
*/

void		add_figure(t_coord empty, t_coord *figure, char **arr, int j)
{
	int		i;
	char	c;

	c = 'A' + j;
	i = 0;
	while (i < 4)
	{
		arr[empty.x + figure[i].x][empty.y + figure[i].y] = c;
		++i;
	}
}
