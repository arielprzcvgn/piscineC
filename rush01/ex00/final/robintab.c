/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   robintab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduquenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:19:37 by rduquenn          #+#    #+#             */
/*   Updated: 2018/07/15 19:10:26 by ariperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		myft_tableau(char *str, int *GrilleSudoku)
{
	int Column;

	Column = 0;
	while (Column < 9)
	{
		if (str[Column] >= 49 && str[Column <= 57])
			GrilleSudoku[Column] = str[Column] - 48;
		else
			GrilleSudoku[Column] = 987654321;
		Column = Column + 1;
	}
	return (0);
}

int		myft_10power(int nb, int Power)
{
	while (nb > 1)
	{
		Power = Power * 10;
		nb = nb - 1;
	}
	return (Power);
}

int		myft_remove_line(int *GrilleSudoku, int Column)
{
	int TenPowerNb;
	int CountC;

	CountC = 0;
	while (CountC < 9)
	{
		if (GrilleSudoku[CountC] <= 9 && GrilleSudoku[CountC] >= 0)
		{
			TenPowerNb = myft_10power(GrilleSudoku[CountC], 1);
		}
		if (GrilleSudoku[Column] / (TenPowerNb) % 10 == GrilleSudoku[CountC] && GrilleSudoku[Column] != 1)
			GrilleSudoku[Column] = GrilleSudoku[Column] - GrilleSudoku[CountC] * TenPowerNb;
		CountC = CountC + 1;
	}
	return (0);
}

int		myft_remove_column(int GrilleSudoku[9][9], int Line, int Column)
{
	int TenPowerNb;
	int CountL;

	CountL = 0;
	while (CountL < 9)
	{
		if (GrilleSudoku[CountL][Column] <= 9 && GrilleSudoku[CountL][Column] >= 0)
		{
			TenPowerNb = myft_10power(GrilleSudoku[CountL][Column], 1);
		}
		if (GrilleSudoku[Line][Column] / (TenPowerNb) % 10 == GrilleSudoku[CountL][Column] && GrilleSudoku[Line][Column] != 1)
			GrilleSudoku[Line][Column] = GrilleSudoku[Line][Column] - GrilleSudoku[CountL][Column] * TenPowerNb;
		CountL = CountL + 1;
	}
	return (0);
}

int     myft_remove_square(int GrilleSudoku[9][9], int Line, int Column)
{
	int TenPowerNb;
	int CountL;
	int CountC;

	CountL = (Line / 3) * 3;
	while (Line == CountL - (CountL % 3))
	{
		CountC = (Column / 3) * 3;
		while (Column == CountC - (CountC % 3))
		{
			if (0 <= GrilleSudoku[CountL][CountC] && GrilleSudoku[CountL][CountC] <= 9)
			{
				TenPowerNb = myft_10power(GrilleSudoku[CountL][CountC], 1);
			}
			if (GrilleSudoku[Line][Column] / (TenPowerNb) % 10 == GrilleSudoku[CountL][CountC] && GrilleSudoku[CountL][CountC] != 1)
				GrilleSudoku[Line][Column] = GrilleSudoku[Line][Column] - GrilleSudoku[CountL][CountC] * TenPowerNb;
			CountC = CountC + 1;
		}
		CountL = CountL + 1;
	}
	return (0);
}

	int		main(int argc, char **argv)
	{
		int CountL;
		int CountC;
		int GrilleSudoku[9][9];

		if (argc != 10)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		CountL = 0;
		while (CountL < 9)
		{
			myft_tableau(argv[CountL + 1], GrilleSudoku[CountL]);
			CountL = CountL + 1;
		}
		CountL = 0;
		CountC = 0;
		while (CountL < 9)
		{
			while (CountC < 9)
			{
				if (GrilleSudoku[CountL][CountC] > 9)
				{
					myft_remove_line(GrilleSudoku[CountL], CountC);
					myft_remove_column(GrilleSudoku, CountL, CountC);
					myft_remove_square(GrilleSudoku, CountL, CountC);
				}
				CountC = CountC + 1;
			}
			CountC = 0;
			CountL = CountL + 1;
		}
		CountC = 0;
		CountL = 0;
		while (CountL < 9)
		{
			while (CountC < 9)
			{
				printf("%d", GrilleSudoku[CountL][CountC]);
				if (CountC != 8)
					printf(" ");
				CountC = CountC + 1;
			}
			CountC = 0;
			printf("\n");
			CountL = CountL + 1;
		}
		return (0);
	}
