/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 20:33:27 by hthomas           #+#    #+#             */
/*   Updated: 2018/07/22 19:10:25 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *buf, int start)
{
	int	i;

	i = 0;
	while (buf[i])
	{
		dest[start + i] = buf[i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *buf)
{
	int		start;
	char	*doubledest;

	start = 0;
	if (!(doubledest = (char *)malloc((ft_strlen(dest) +
						ft_strlen(buf)) * sizeof(char))))
		return (NULL);
	ft_strcpy(doubledest, dest, start);
	while (doubledest[start])
		start++;
	free(dest);
	return (ft_strcpy(doubledest, buf, start));
}
