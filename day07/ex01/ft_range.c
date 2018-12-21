/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:19:56 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/24 19:08:50 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*tableau;

	range = max - min;
	if (range <= 0)
		return (0);
	tableau = (int*)malloc(sizeof(*tableau) * range);
	if (tableau == NULL)
		return (0);
	i = min;
	while (i < max)
	{
		tableau[i - min] = i;
		i++;
	}
	return (tableau);
}
