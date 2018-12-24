/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:55:59 by hthomas           #+#    #+#             */
/*   Updated: 2018/07/22 18:57:25 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_hauteur_largeur(char *str, int *hauteur, int *largeur)
{
	int cpt_colonnes;
	int i;

	i = 0;
	cpt_colonnes = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			(*hauteur)++;
			if (*largeur == 0)
			{
				*largeur = cpt_colonnes;
			}
			else if (*largeur != cpt_colonnes - 1)
				return (0);
			cpt_colonnes = 0;
		}
		i++;
		cpt_colonnes++;
	}
	return (1);
}
