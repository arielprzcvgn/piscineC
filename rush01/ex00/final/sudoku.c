/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 12:34:13 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/14 23:52:04 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		**ft_tableau(char **argv)
{
	int colonne;
	int ligne;
	int tab[9][9];

	colonne = 0;
	ligne = 0;
	while (ligne < 9)
	{
		colonne = 0;
		while (colonne < 9)
		{
			if ('0' <= argv[ligne + 1][colonne] && argv[ligne + 1][colonne] <= '9')
				tab[ligne][colonne] = argv[ligne + 1][colonne] - 48;
			else if (argv[ligne + 1][colonne] == '.')
				tab[ligne][colonne] = 987654321;
			else
				return ({{0}, {0}});
			colonne++;
		}
		ligne++;
	}
	return (tab);
} 

int		main(int argc, char **argv)
{
	int colonne;
	int ligne;
	int **tableau;

	tableau = (int **)malloc(sizeof(int *) * 9);
	i = 0;
	while(i != 9)
	{
		tableau[i] = (int *)malloc(sizeof(int) * 9);
		i++;
	}
	colonne = 0;
	ligne = 0;
	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tableau = ft_tableau(argv, **tab);
	//	if (tableau == (42)
	//	{
	//		write(1, "Error\n", 6);
	//		return (0);
	//	}
	printf("1\n");
	ft_tableau(argv);
	printf("2\n");
	while (ligne < 9)
	{
		colonne = 0;
		while (colonne < 9)
		{
			printf("%i ", tab[ligne][colonne]);
			colonne++;
		}
		printf("\n");
		ligne++;
	}
	printf("fin\n");
	return (0);
}
