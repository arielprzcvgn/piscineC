/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:33:06 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/24 19:12:43 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		taille;

	taille = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			taille++;
			j++;
		}
		taille++;
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		taille;
	char	*chaine;

	chaine = (char*)malloc(sizeof(*chaine) * length_params(argc, argv));
	if (chaine == NULL)
		return (0);
	taille = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			chaine[taille] = argv[i][j];
			taille++;
			j++;
		}
		chaine[taille] = '\n';
		taille++;
		i++;
	}
	chaine[taille - 1] = '\0';
	return (chaine);
}
