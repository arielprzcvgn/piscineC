/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:19:56 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/24 19:09:18 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tableau;
	int		valeurs;

	valeurs = max - min;
	if (valeurs <= 0)
		return (0);
	tableau = (int*)malloc(sizeof(*tableau) * valeurs);
	if (tableau == NULL)
		return (0);
	i = min;
	while (i < max)
	{
		tableau[i - min] = i;
		i++;
	}
	*range = tableau;
	return (valeurs);
}
