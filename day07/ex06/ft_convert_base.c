/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 22:32:08 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/24 20:03:29 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		to_base_ten(char *nbr, char *base_from)
{
	int		i;
	int		base;
	int		base_ten;
	int		number;

	base = ft_strlen(base_from);
	i = 0;
	base_ten = 0;
	while (nbr[i] != '\0')
	{
		number = 0;
		while (base_from[number] != nbr[i])
			number++;
		base_ten = base_ten * base + number;
		i++;
	}
	return (base_ten);
}

char	*from_base_ten(int nbr, char *base_to)
{
	int		i;
	int		base;
	char	*final_base;
	int		cmpt;
	int		j;

	base = ft_strlen(base_to);
	cmpt = nbr;
	j = 0;
	while ((cmpt /= base) != 0)
		j++;
	final_base = (char*)malloc(sizeof(*final_base) * (j + 1));
	final_base[j + 1] = '\0';
	while (j != -1)
	{
		i = 0;
		while (i != nbr % base)
			i++;
		final_base[j] = base_to[i];
		nbr /= base;
		j--;
	}
	return (final_base);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (from_base_ten(to_base_ten(nbr, base_from), base_to));
}
