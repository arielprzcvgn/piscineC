/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:59:05 by abourenn          #+#    #+#             */
/*   Updated: 2018/07/24 15:07:23 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_draw01(int colonne, int ligne, int col_m, int ligne_m)
{
	if (((col_m != 0) && (ligne == 0) && (colonne == col_m)) ||
((ligne == ligne_m) && (colonne == 0) && (ligne_m != 0)))
		return ('\\');
	else if (((ligne == 0) && (colonne == 0)) ||
((ligne == ligne_m) && (colonne == col_m)))
		return ('/');
	else if (((0 < ligne < ligne_m) && ((colonne == 0) ||
(colonne == col_m))) ||
((0 < colonne < col_m) && ((ligne == 0) ||
(ligne == ligne_m))))
		return ('*');
	else
		return (' ');
}

char	*rush01(int x, int y)
{
	int		l;
	int		c;
	char	*str;
	int		i;

	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * y) + 1)))
		return (NULL);
	c = 0;
	l = 0;
	i = 0;
	if ((x > 0) && (y > 0))
		while (l < y)
		{
			while (c < x)
			{
				str[x * l + c + i] = ft_draw01(c, l, x - 1, y - 1);
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
