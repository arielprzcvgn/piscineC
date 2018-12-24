/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 08:08:58 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/08 11:54:25 by tallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	extreme_x_line(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('A');
	else if ((i == (x - 1) && j == 0) || (i == 0 && j == (y - 1)))
		ft_putchar('C');
	else if (i == (x - 1) && j == (y - 1))
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	if (x > 0 && y > 0)
	{
		j = 0;
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				if (j == 0 || j == y - 1)
					extreme_x_line(i, j, x, y);
				else if (i == 0 || i == (x - 1))
					ft_putchar('B');
				else
					ft_putchar(' ');
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
