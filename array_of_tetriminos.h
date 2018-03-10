/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_of_tetriminos.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 18:06:06 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/15 16:13:45 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_OF_TETRIMINOS_H

# define ARRAY_OF_TETRIMINOS_H

char	**create_array_tetriminos(int n);
char	**free_array_of_tetriminos(char **arr, int n);
void	fill_array_point(char **arr, int n);
void	print_array(t_map map);

#endif
