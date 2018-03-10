/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_of_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 17:53:23 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/29 19:59:09 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terminos.h"

/*
 ** n x n square
*/

char		**create_array_tetriminos(int n)
{
	char	**ret;
	int		i;

	i = 0;
	ret = NULL;
	if (!(ret = (char **)malloc((n + 1) * sizeof(char *))))
		return (NULL);
	while (i < n + 1)
	{
		ret[i] = (char *)malloc((n + 1) * sizeof(char));
		if (ret[i] == NULL)
		{
			i = 0;
			while (ret[i])
				free(ret[i++]);
			return (NULL);
		}
		++i;
	}
	return (ret);
}

char		**free_array_of_tetriminos(char **arr, int n)
{
	int		i;

	i = 0;
	while (i < n)
		free(arr[i++]);
	free(arr);
	arr = NULL;
	return (arr);
}

/*
 ** n x n - size of array
*/

void		fill_array_point(char **arr, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
			arr[i][j++] = '.';
		arr[i][j] = '\0';
		++i;
	}
}

void		print_array(t_map map)
{
	int j;

	j = 0;
	while (j < map.smallest_size)
	{
		ft_putstr(map.square[j]);
		++j;
		ft_putstr("\n");
	}
}
