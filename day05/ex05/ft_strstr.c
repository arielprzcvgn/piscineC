/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:10:38 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/10 21:19:40 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (!to_find)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j] || to_find[j] == '\0')
		{
			while (str[i + j] == to_find[j] || to_find[j] == '\0')
			{
				if (to_find[j] == '\0')
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
