/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:59:05 by abourenn          #+#    #+#             */
/*   Updated: 2018/07/22 13:52:38 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_draw02(int ligne, int colonne, int ligne_max, int col_max)
{
	if (((colonne == 0) && (ligne == 0)) ||
((colonne == 0) && (ligne == ligne_max - 1) && (ligne_max != 1)))
		return ('A');
	else if (((col_max != 1) && (colonne == col_max - 1) && (ligne == 0)) ||
((colonne == col_max - 1) && (ligne == ligne_max - 1)))
		return ('C');
	else if (((0 < colonne < col_max - 1) && ((ligne == 0) ||
(ligne == ligne_max - 1))) ||
((0 < ligne < ligne_max - 1) && ((colonne == 0) ||
(colonne == col_max - 1))))
		return ('B');
	else
		return (' ');
}

char	*rush02(int x, int y)
{
	int		l;
	int		c;
	char	*str;
	int		i;

	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * y) + 1)))
		return (NULL);
	l = 0;
	c = 0;
	i = 0;
	if ((x > 0) && (y > 0))
		while (l < y)
		{
			while (c < x)
			{
				str[x * l + c + i] = ft_draw02(c, l, x, y);
				c++;
			}
			l++;
			str[c * l + i] = '\n';
			i++;
			c = 0;
		}
	str[(x + 1) * y] = '\0';
	return (str);
}
