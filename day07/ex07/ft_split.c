/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:07:41 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/25 14:49:50 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sep(char s, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == s)
			return (1);
		i++;
	}
	if (s == '\0')
		return (1);
	return (0);
}

int		nbrchar(char *str, int j, int *k, char *charset)
{
	while (sep(str[j], charset))
		j++;
	*k = j;
	while (!(sep(str[j], charset)) && str[j] != '\0')
		j++;
	return (j);
}

int		nbstr(char *str, char *charset)
{
	int i;
	int nbwords;

	i = 0;
	nbwords = 0;
	if (!(sep(str[i], charset)))
		nbwords++;
	while (str[i] != '\0')
	{
		if (sep(str[i], charset) && !(sep(str[i + 1], charset)))
			nbwords++;
		i++;
	}
	return (nbwords);
}

char	**ft_split(char *str, char *charset)
{
	char	**splited;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	splited = (char **)malloc(sizeof(char *) * (nbstr(str, charset) + 1));
	if (splited == NULL)
		return (0);
	while (i < nbstr(str, charset))
	{
		j = nbrchar(str, j, &k, charset);
		splited[i] = (char *)malloc(sizeof(char) * (j - k + 1));
		l = k;
		while (!sep(str[k], charset))
		{
			splited[i][k - l] = str[k];
			k++;
		}
		splited[i++][k - l] = '\0';
	}
	splited[i] = 0;
	return (splited);
}
