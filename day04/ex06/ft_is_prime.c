/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:34:54 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/21 17:26:51 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		div;

	if (nb < 2)
		return (0);
	else
	{
		div = 2;
		while (div < (nb / div))
		{
			if (nb % div == 0)
				return (0);
			div++;
		}
		return (1);
	}
}

int		main()
{
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}
