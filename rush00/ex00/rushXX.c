/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushX.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gegeniey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:03:47 by gegeniey          #+#    #+#             */
/*   Updated: 2023/09/09 10:44:46 by gegeniey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_first_ligne(int x, char *symbols)
{
	int	idx;

	idx = 0;
	while (idx < x)
	{
		if (0 == idx)
		{
			ft_putchar(symbols[0]);
		}
		else if (x - 1 == idx)
		{
			ft_putchar(symbols[2]);
		}
		else
		{
			ft_putchar(symbols[1]);
		}
		idx++;
	}
	ft_putchar('\n');
}

void	write_middle_line(int x, char *symbols)
{
	int	idx;

	idx = 0;
	while (idx < x)
	{
		if (0 == idx || x - 1 == idx)
		{
			ft_putchar(symbols[3]);
		}
		else
		{
			ft_putchar(' ');
		}
		idx++;
	}
	ft_putchar('\n');
}

void	write_last_ligne(int x, char *symbols)
{
	int	idx;

	idx = 0;
	while (idx < x)
	{
		if (0 == idx)
		{
			ft_putchar(symbols[4]);
		}
		else if (x - 1 == idx)
		{
			ft_putchar(symbols[6]);
		}
		else
		{
			ft_putchar(symbols[5]);
		}
		idx++;
	}
	ft_putchar('\n');
}

void	rushxx(int x, int y, char *symbols)
{
	int	idy;

	idy = 0;
	while (idy < y)
	{
		if (0 == idy)
		{
			write_first_ligne(x, symbols);
		}
		else if (y - 1 == idy)
		{
			write_last_ligne(x, symbols);
		}
		else
		{
			write_middle_line(x, symbols);
		}
		idy++;
	}
}
