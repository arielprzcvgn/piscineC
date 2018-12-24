/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:49:04 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/14 22:33:22 by rduquenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_remplit_cases_avec_possibilites_lignes(int **tab)
{
	int colonne;
	int line;
	int possib;
	int dix;

	colonne = 0;
	line = 0;
	possib = 9;
	dix = 1;
	while (line < 9)
	{
		while (colonne < 9)
		{
			if (tab[line][colonne] == 0)
			{
				while (possib > 0)
				{
					tab[line][colonne] = tab[line][colonne] + (possib * 10);
					possib = possib - 1;
					dix = dix * 10;
				}
			}
			colonne = colonne + 1;
		}
		line = line + 1;
}
