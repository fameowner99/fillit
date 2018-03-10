/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinates.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:23:07 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/24 18:13:16 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COORDINATES_H

# define COORDINATES_H

# include "terminos.h"

void	get_coordinates(char **res, t_coord *arr);
void	normalize_coordinates(t_coord *arr);
int		check_if_fit(t_coord empty, t_figure_point point, t_map map, int j);
void	add_figure(t_coord empty, t_coord *figure, char **arr, int j);

#endif
