/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminos.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 16:45:21 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/27 15:57:05 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TERMINOS_H

# define TERMINOS_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_pos
{
	int			x;
	int			y;
}				t_coord;

typedef struct	s_map
{
	char		**square;
	int			smallest_size;
	int			num_term;
}				t_map;

typedef struct	s_figure_point
{
	t_coord		figure[26][4];
}				t_figure_point;

void			ft_putstr(char const *s);
int				ft_strncmp(char *s1, char *s2, size_t n);

#endif
