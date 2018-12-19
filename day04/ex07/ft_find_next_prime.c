/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:34:54 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/09 14:31:42 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		div;
	int		nextprime;
	int		prime;

	if (nb < 2)
		return (2);
	else
	{
		nextprime = nb + 1;
		prime = 0;
		while (prime == 0)
		{
			prime = 1;
			div = 2;
			while (div < nextprime)
			{
				if (nextprime % div == 0)
					prime = 0;
				div++;
			}
			if (prime == 0)
				nextprime++;
		}
		return (nextprime);
	}
}
