/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 19:09:05 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/27 15:54:55 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terminos.h"
#include "array_of_tetriminos.h"
#include "coordinates.h"
#include "algorithm.h"
#include "figure.h"

void				helper(int num_term, char ***res)
{
	t_map			map;
	t_figure_point	point;
	t_coord			empty;

	map.smallest_size = 2;
	map.square = create_array_tetriminos(map.smallest_size);
	map.num_term = num_term;
	find_coord_of_figures(&point, num_term, res);
	fill_array_point(map.square, map.smallest_size);
	empty.x = 0;
	empty.y = 0;
	while (!recurs(map, empty, 0, point))
	{
		empty.x = 0;
		empty.y = 0;
		free_array_of_tetriminos(map.square, map.smallest_size);
		map.square = create_array_tetriminos(++map.smallest_size);
		fill_array_point(map.square, map.smallest_size);
	}
	print_array(map);
}

int					recurs(t_map map, t_coord empty,
						int j, t_figure_point point)
{
	empty.x = 0;
	if (j == map.num_term)
		return (1);
	if (map.smallest_size * map.smallest_size < map.num_term * 4)
		return (0);
	while (empty.x < map.smallest_size)
	{
		empty.y = 0;
		while (empty.y < map.smallest_size)
		{
			if (empty.x == map.smallest_size - 1 &&
				empty.y == map.smallest_size - 1)
				return (0);
			if (check_if_fit(empty, point, map, j))
			{
				add_figure(empty, point.figure[j], map.square, j);
				if (recurs(map, empty, j + 1, point))
					return (1);
				delete_figure(empty, point.figure[j], map.square);
			}
			++empty.y;
		}
		++empty.x;
	}
	return (0);
}
