/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:35:00 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/16 16:49:11 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_VALID_H

# define ALL_VALID_H

# include "terminos.h"

int		all_valid(char **argv, int *num_term, char ****res);
int		my_exception(t_coord s, char ***res, int t);

#endif
