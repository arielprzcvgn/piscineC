/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:23:20 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/16 14:53:21 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	negative_extreme(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

int		pow10(int nb)
{
	long i;

	i = 1;
	while ((nb / (i * 10)) != 0)
		i = i * 10;
	return (i);
}

void	ft_putnbr(int nb)
{
	int i;

	if (nb == -2147483648)
		negative_extreme();
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		i = pow10(nb);
		while (i > 0)
		{
			ft_putchar((nb / i) + '0');
			nb = nb - (nb / i) * i;
			i = i / 10;
		}
	}
}
