/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 18:53:44 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/25 14:14:19 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		n;
	int		k;
	int		s;
	int		pow;

	n = nb;
	s = 1;
	while (n > 9)
	{
		n /= 10;
		s++;
	}
	n = nb;
	k = 0;
	pow = 1;
	while (++k < s)
		pow *= 10;
	k = 0;
	while (k < s)
	{
		ft_putchar(n / pow + 48);
		n -= pow * (n / pow);
		pow /= 10;
		k++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
