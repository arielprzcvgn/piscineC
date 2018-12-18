/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 20:24:30 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/09 15:04:49 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nbr;
	int a;
	int negative;

	a = 0;
	nbr = 0;
	negative = 1;
	while (str[a] < 33)
		a++;
	if (str[a] == 45)
	{
		negative = -1;
		a++;
	}
	else if (str[a] == 43)
		a++;
	if (!(47 < str[a] && str[a] < 58))
		return (0);
	while (47 < str[a] && str[a] < 58)
	{
		nbr *= 10;
		nbr += (str[a] - 48);
		a++;
	}
	return (negative * nbr);
}
