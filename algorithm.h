/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:08:59 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/24 18:04:23 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_H

# define ALGORITHM_H

# include "terminos.h"

void	helper(int num_term, char ***res);
int		recurs(t_map map, t_coord empty, int j, t_figure_point point);

#endif
