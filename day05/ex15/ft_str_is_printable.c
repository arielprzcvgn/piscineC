/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:04:22 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/11 12:03:14 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;
	int		printable;

	i = 0;
	printable = 1;
	while (str[i] != '\0')
	{
		if (str[i] < ' ')
			printable = 0;
		i++;
	}
	return (printable);
}
