/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 08:55:00 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/08 14:00:57 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_2putchar(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	while (a < 8)
	{
		if (a < b % 10 && b % 10 < c % 10)
		{
			ft_2putchar((a + '0'), (b % 10 + '0'));
			ft_putchar(c % 10 + '0');
			if (a < 7)
				ft_2putchar(',', ' ');
		}
		c++;
		if (c % 10 == 0)
			b++;
		if (b % 10 == 0)
		{
			a++;
			b++;
		}
	}
}
