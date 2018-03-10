/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 17:45:06 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/27 16:04:06 by npiriyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "figure.h"
#include "coordinates.h"
#include "array_of_tetriminos.h"

void		delete_figure(t_coord empty, t_coord figure[4], char **square)
{
	int i;

	i = 0;
	while (i < 4)
	{
		square[empty.x + figure[i].x][empty.y + figure[i].y] = '.';
		++i;
	}
}

void		find_coord_of_figures(t_figure_point *point,
			int num_term, char ***res)
{
	int i;

	i = 0;
	points_to_zero(point);
	while (i < num_term)
	{
		get_coordinates(res[i], point->figure[i]);
		++i;
	}
}

void		points_to_zero(t_figure_point *point)
{
	int i;

	i = 0;
	while (i < 26)
	{
		point->figure[i][0].x = 0;
		point->figure[i][1].x = 0;
		point->figure[i][2].x = 0;
		point->figure[i][3].x = 0;
		point->figure[i][0].y = 0;
		point->figure[i][1].y = 0;
		point->figure[i][2].y = 0;
		point->figure[i][3].y = 0;
		++i;
	}
}

t_coord		move(t_coord s, char wheremove[6])
{
	if (!ft_strncmp("right", wheremove, 4))
	{
		s.y += 1;
		return (s);
	}
	if (!ft_strncmp("down", wheremove, 4))
	{
		s.x += 1;
		return (s);
	}
	return (s);
}
