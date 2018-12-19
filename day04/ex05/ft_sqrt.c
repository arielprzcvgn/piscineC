/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:06:38 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/10 22:58:57 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		sqrt;

	if (nb < 1)
		return (0);
	else
	{
		sqrt = 1;
		while (sqrt * sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			sqrt++;
		}
		return (0);
	}
}
