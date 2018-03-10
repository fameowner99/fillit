/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_and_fill_arr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 15:49:26 by vmiachko          #+#    #+#             */
/*   Updated: 2017/12/24 18:16:32 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terminos.h"

/*
 ** return array of 2x2 terminoses , n - number of terminoses
*/

char		***create_array(int n)
{
	char	***ret;
	int		i;
	int		j;

	ret = NULL;
	i = 0;
	ret = (char ***)malloc((n + 1) * sizeof(char **));
	while (i < n)
	{
		ret[i] = (char **)malloc(5 * sizeof(char *));
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < 4)
			ret[i][j++] = (char *)malloc(5 * sizeof(char));
		i++;
	}
	return (ret);
}

/*
 ** fills array f terminoses with buffer
*/

void		fill_array(char ***ret, int n, char *buf)
{
	int		i;
	int		j;
	int		k;
	int		c;

	i = 0;
	c = 0;
	while (i < n)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				while (buf[c] == '\n')
					c++;
				ret[i][j][k++] = buf[c++];
			}
			ret[i][j][k] = '\0';
			j++;
		}
		i++;
	}
	ret[i] = NULL;
}

int			read_file(char **argv, char *buf)
{
	int		fd;
	int		rd;

	fd = open(argv[1], O_RDONLY);
	if (fd != -1)
	{
		while ((rd = read(fd, buf, 547)))
			buf[rd] = '\0';
		close(fd);
		return (1);
	}
	return (0);
}
