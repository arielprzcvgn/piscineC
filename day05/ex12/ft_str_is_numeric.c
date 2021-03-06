/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:04:22 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/11 12:01:19 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		i;
	int		numeric;

	i = 0;
	numeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || '9' < str[i])
			numeric = 0;
		i++;
	}
	return (numeric);
}
