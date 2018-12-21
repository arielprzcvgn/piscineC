/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:17:38 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/25 14:58:48 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	copy = (char*)malloc(sizeof(*copy) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*par;

	par = (struct s_stock_par *)malloc(sizeof(struct s_stock_par) * ac + 1);
	if (par == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		par[i].size_param = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = (char*)malloc(sizeof(char) * (par[i].size_param + 1));
		par[i].copy = ft_strdup(av[i]);
		par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
