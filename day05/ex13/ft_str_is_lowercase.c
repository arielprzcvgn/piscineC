/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:04:22 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/11 12:01:34 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		lower;

	i = 0;
	lower = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || 'z' < str[i])
			lower = 0;
		i++;
	}
	return (lower);
}
