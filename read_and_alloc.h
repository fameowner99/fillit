/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_and_fill_arr.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:40 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/14 17:46:50 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_AND_ALLOC_H
# define READ_AND_ALLOC_H

int		read_file(char **argv, char *buf);
char	***create_array(int n);
void	fill_array(char ***ret, int n, char *buf);

#endif
