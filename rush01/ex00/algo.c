/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:24:10 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/17 17:24:13 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rowrepeat(int map[4][4], int row, int value)
{
	int	column;

	column = 0;
	while (column < 4)
	{
		if (map[row][column] == value)
			return (1);
		column++;
	}
	return (0);
}

int	columnrepeat(int map[4][4], int column, int value)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (map[row][column] == value)
			return (1);
		row++;
	}
	return (0);
}

int	valid_value(int map[4][4], int row, int column, int value)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (j < 4)
	{
		if (map[row][j] == value)
			return (0);
		j++;
	}
	while (i < 4)
	{
		if (map[i][column] == value)
			return (0);
	i++;
	}
	return (1);
}

void	norminette_25(int map[4][4], int row, int column, int value)
{
	while (value <= 4)
	{
		if (valeurValide(map, row, column, value))
		{
			map[row][column] = value;
			if (solve (map, nextline, nextcolumn))
				return (1);
			map[row][column] = 0;
		}
		value++;
	}
}

int	solve(int map[4][4], int row, int column, int value)
{
	int	nextline;
	int	nextcolumn;

	value = 1;
	if (row == 4)
		return (1);
	nextline = row;
	nextcolumn = column + 1;
	if (nextcolumn == 4)
	{
		nextline++;
		nextcolumn = 0;
	}
	if (map[row][column] != 0)
		return (solve (map, nextline, nextcolumn));
	norminette_25(int map[4][4], int row, int column, int value)
	return (0);
}
