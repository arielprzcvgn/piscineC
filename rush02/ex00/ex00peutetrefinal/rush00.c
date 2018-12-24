/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:59:05 by abourenn          #+#    #+#             */
/*   Updated: 2018/07/22 14:47:55 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_draw00(int ligne, int colonne, int ligne_max, int colonne_max)
{
	if (((ligne_max != 1) && (colonne == 0) && (ligne == ligne_max - 1)) ||
((colonne == colonne_max - 1) && (ligne == 0) && (colonne_max != 1)) ||
((colonne == 0) && (ligne == 0)) ||
((colonne == colonne_max - 1) && (ligne == ligne_max - 1)))
		return ('o');
	else if (((0 < ligne < ligne_max - 1) && ((colonne == 0) ||
(colonne == colonne_max - 1))))
		return ('-');
	else if (((0 < colonne < colonne_max - 1) && ((ligne == 0) ||
(ligne == ligne_max - 1))))
		return ('|');
	else
		return (' ');
}

char	*rush00(int x, int y)
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
				str[(l * x) + c + i] = ft_draw00(c, l, x, y);
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
