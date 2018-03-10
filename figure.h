/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 17:56:11 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/27 16:04:42 by npiriyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIGURE_H

# define FIGURE_H

# include "terminos.h"

void		delete_figure(t_coord empty, t_coord figure[4], char **square);
void		find_coord_of_figures(t_figure_point *point,
			int num_term, char ***res);
void		points_to_zero(t_figure_point *point);
t_coord		move(t_coord s, char wheremove[6]);

#endif
