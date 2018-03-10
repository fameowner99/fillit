/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:03:34 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/16 16:47:24 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H

# define VALIDATION_H

# include "figure.h"

int		first_check(int i, int *g_n, char *buf);
void	find_first_hash(int *c, int *l, int t, char ***res);
int		check_position(t_coord s, int t, char ***res, int *counter);
void	find_first_hash2(int *c, int *l, int t, char ***res);

#endif
