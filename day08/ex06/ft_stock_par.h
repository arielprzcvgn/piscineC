/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:20:19 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/25 14:22:59 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
};

void	ft_putchar(char c);

#endif
