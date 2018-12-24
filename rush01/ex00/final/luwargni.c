/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 23:34:47 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/14 23:35:34 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	tableau(int ac, char **str)
{
	int		**tab;
	int		i;
	int		j;

	tab = (int **)malloc(sizeof(int	*) * 9);
	i = 0;
	while(i != 9)
	{
		tab[i] = (int *)malloc(sizeof(int) * 9);
		i++;
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (j < ac - 1)
		{
			if (str[i][j] == '.')
				tab[i - 1][j] = 0;
			else
				tab[i - 1][j] = str[i][j] - '0';
			printf("[%d]", tab[i - 1][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}
/*
//backtrack();
void	sudoku(char *str)
{
	ft_putstr(str);
}
*/
int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac == 10)
		tableau(ac, av);
	else
		write(1, "Error\n", 6);
	return (0);
}
