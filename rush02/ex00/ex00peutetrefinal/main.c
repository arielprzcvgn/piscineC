/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 16:56:03 by hthomas           #+#    #+#             */
/*   Updated: 2018/07/22 20:09:23 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "headers.h"
#define BUFF 1000000

char	*get_entry(void)
{
	char	*buf;
	int		ret;
	int		i;

	i = 0;
	if (!(buf = (char *)malloc((BUFF + 1) * sizeof(*buf))))
		return (NULL);
	while (i <= BUFF)
	{
		ret = read(0, &buf[i], 1);
		i++;
	}
	buf[BUFF + 1] = '\0';
	return (buf);
}

void	affichage(int numero, int largeur, int hauteur)
{
	ft_putstr("[colle-0");
	ft_putnbr(numero);
	ft_putstr("] [");
	ft_putnbr(largeur);
	ft_putstr("] [");
	ft_putnbr(hauteur);
	ft_putstr("]");
}

void	test_match(char *str, int largeur, int hauteur)
{
	int		plusieurs;
	int		numero;
	char	*s;

	plusieurs = 0;
	numero = 0;
	while (numero < 5)
	{
		s = rush(numero, largeur, hauteur);
		if (!(ft_strcmp(str, s)))
		{
			if (plusieurs)
				write(1, " || ", 4);
			affichage(numero, largeur, hauteur);
			plusieurs = 1;
		}
		free(s);
		numero++;
	}
	ft_putstr("\n");
}

int		is_valid(char *str)
{
	if (!(*str == 'o' || *str == '/' || *str == 'A'))
	{
		ft_putstr("aucune\n");
		return (0);
	}
	return (1);
}

int		main(void)
{
	char	*str;
	int		largeur;
	int		hauteur;

	str = get_entry();
	largeur = 0;
	hauteur = 0;
	if (!(is_valid(str)))
		return (0);
	find_hauteur_largeur(str, &hauteur, &largeur);
	test_match(str, largeur, hauteur);
	free(str);
	return (0);
}
