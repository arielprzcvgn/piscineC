/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 20:45:50 by hthomas           #+#    #+#             */
/*   Updated: 2018/07/22 19:02:28 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*rush(int numero, int largeur, int hauteur)
{
	if (numero == 0)
		return (rush00(largeur, hauteur));
	if (numero == 1)
		return (rush01(largeur, hauteur));
	if (numero == 2)
		return (rush02(largeur, hauteur));
	if (numero == 3)
		return (rush03(largeur, hauteur));
	if (numero == 4)
		return (rush04(largeur, hauteur));
	return (NULL);
}
