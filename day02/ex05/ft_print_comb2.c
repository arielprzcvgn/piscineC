/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 08:55:00 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/08 13:59:01 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_2putchar(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		if (a < b % 100)
		{
			ft_2putchar(a / 10 + '0', a % 10 + '0');
			ft_putchar(' ');
			ft_2putchar(b / 10 + '0', b % 10 + '0');
			if (a < 98)
				ft_2putchar(',', ' ');
		}
		b++;
		if (b % 100 == 0)
		{
			a++;
			b = 0;
		}
	}
}
