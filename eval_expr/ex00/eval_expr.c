/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:40:24 by ariperez          #+#    #+#             */
/*   Updated: 2018/07/22 23:32:53 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int nbr;
	int a;
	int negative;

	a = 0;
	nbr = 0;
	negative = 1;
	while (str[a] < 33)
		a++;
	if (str[a] == 45)
	{
		negative = -1;
		a++;
	}
	else if (str[a] == 43)
		a++;
	if (!(47 < str[a] && str[a] < 58))
		return (0);
	while (47 < str[a] && str[a] < 58)
	{
		nbr *= 10;
		nbr += (str[a] - 48);
		a++;
	}
	return (negative * nbr);
}

void	ft_itoa_len(int nb, int *i)
{
	int k;

	k = nb;
	while (k > 9)
	{
		k /= 10;
		*i = *i + 1;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		k;

	k = n >= 0 ? n : -1 * n;
	i = n >= 0 ? 0 : 1;
	ft_itoa_len(k, &i);
	res = (char*)malloc(sizeof(char) * (i + 1));
	res[0] = '-';
	while (i >= (n >= 0 ? 0 : 1))
	{
		res[i] = k % 10 + 48;
		k /= 10;
		i--;
	}
	while ((res[i] > 47 && res[i] < 58) || res[i] == '-')
		i++;
	res[i] = '\0';
	return (res);
}

char	*npi(char *str)
{
	char	*polonaise;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	polonaise = (char *)malloc(sizeof(*polonaise) * ft_strlen(str));
	while (i <= ft_strlen(str))
	{
		while ('0' <= str[i] && str[i] <= '9')
		{
			polonaise[j++] = str[i];
			i++;
		}
		polonaise[j++] = ' ';
		if (str[i] == 41 || str[i] == '\0')
		{
			k = i;
			while (str[k] != 40 && k != 0)
			{
				if (str[k] == '+' || str[k] == '-' ||
						str[k] == '/' || str[k] == '*' || str[k] == '%')
				{
					polonaise[j] = str[k];
					str[k] = ' ';
					polonaise[j + 1] = ' ';
					j += 2;
				}
				k--;
			}
			str[k] = ' ';
		}
		i++;
	}
	polonaise[j] = '\0';
	return (polonaise);
}

char	*calcul(char operation, int nb1, int nb2)
{
	if (operation == '+')
		return (ft_itoa(nb1 + nb2));
	else if (operation == '-')
		return (ft_itoa(nb1 - nb2));
	else if (operation == '*')
		return (ft_itoa(nb1 * nb2));
	else if (operation == '/')
		return (ft_itoa(nb1 / nb2));
	else if (operation == '%')
		return (ft_itoa(nb1 % nb2));
	return (0);
}

char	*nombres(char *str, int *k)
{
	char	*nb;
	int		j;

	nb = (char *)malloc(sizeof(*nb) * 10);
	j = 0;
	while (str[*k] < '0')
		*k -= 1;
	while ('0' <= str[*k] && str[*k] <= '9')
		*k -= 1;
	*k += 1;
	j = 0;
	while ('0' <= str[*k + j] && str[*k + j] <= '9')
	{
		nb[j] = str[*k + j];
		str[*k + j] = ' ';
		j++;
	}
	nb[j] = '\0';
	return (nb);
}

int		resolution(char *str)
{
	int		i;
	int		k;
	char	*nb1;
	char	*nb2;
	int		j;

	str = npi(str);
	i = 0;
	while (str[i] != '\0')
	{
		k = i;
		if (str[i] == '+' || str[i] == '-' ||
				str[i] == '/' || str[i] == '*' || str[i] == '%')
		{
			nb1 = nombres(str, &k);
			nb2 = nombres(str, &k);
			nb1 = calcul(str[i], ft_atoi(nb2), ft_atoi(nb1));
			j = 0;
			while (nb1[j] != '\0')
			{
				str[k + j] = nb1[j];
				j++;
			}
			str[i] = ' ';
		}
		i++;
	}
	return (ft_atoi(str));
}

int		main(int argc, char **argv)
{
	printf("%d\n", resolution(argv[1]));
	return (argc);
}
