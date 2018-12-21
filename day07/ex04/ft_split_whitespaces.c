/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:07:41 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/25 14:50:06 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sep(char s)
{
	if (s == ' ' || s == '\t' || s == '\n' || s == '\0')
		return (1);
	return (0);
}

int		nbrchar(char *str, int j, int *k)
{
	while (sep(str[j]))
		j++;
	*k = j;
	while (str[j] != ' ' && str[j] != '\n' && str[j] != '\t' && str[j] != '\0')
		j++;
	return (j);
}

int		nbstr(char *str)
{
	int i;
	int nbwords;

	i = 0;
	nbwords = 0;
	if (!(sep(str[i])))
		nbwords++;
	while (str[i] != '\0')
	{
		if (sep(str[i]) && !(sep(str[i + 1])))
			nbwords++;
		i++;
	}
	return (nbwords);
}

char	**ft_split_whitespaces(char *str)
{
	char	**splited;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	if ((splited = (char **)malloc(sizeof(char *) * (nbstr(str) + 1))) == NULL)
		return (0);
	while (i < nbstr(str))
	{
		j = nbrchar(str, j, &k);
		splited[i] = (char *)malloc(sizeof(char) * (j - k + 1));
		l = k;
		while (!sep(str[k]))
		{
			splited[i][k - l] = str[k];
			k++;
		}
		splited[i][k - l] = '\0';
		i++;
	}
	splited[i] = 0;
	return (splited);
}
