/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 19:17:15 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/13 16:43:36 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	ampm1;
	char	ampm2;
	int		hour2;

	hour2 = (hour + 1) % 24;
	if (hour % 24 < 12)
		ampm1 = 'A';
	else
		ampm1 = 'P';
	if (hour2 % 24 < 12)
		ampm2 = 'A';
	else
		ampm2 = 'P';
	if (hour == 0 || hour == 12 || hour == 24)
		hour = 12;
	else
		hour = hour % 12;
	if (hour2 == 0 || hour2 == 12 || hour2 == 24)
		hour2 = 12;
	else
		hour2 = hour2 % 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, ampm1, hour2, ampm2);
}
