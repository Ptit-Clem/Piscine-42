/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gegeniey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:03:47 by gegeniey          #+#    #+#             */
/*   Updated: 2023/09/09 09:47:14 by gegeniey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_first_ligne(int x)
{
	int	idx;

	idx = 0;
	while (idx < x)
	{
		if (0 == idx)
		{
			ft_putchar('A');
		}
		else if (x - 1 == idx)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		idx++;
	}
	ft_putchar('\n');
}

void	write_middle_line(int x)
{
	int	idx;

	idx = 0;
	while (idx < x)
	{
		if (0 == idx || x - 1 == idx)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		idx++;
	}
	ft_putchar('\n');
}

void	write_last_ligne(int x)
{
	int	idx;

	idx = 0;
	while (idx < x)
	{
		if (0 == idx)
		{
			ft_putchar('A');
		}
		else if (x - 1 == idx)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		idx++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	idy;

	idy = 0;
	while (idy < y)
	{
		if (0 == idy)
		{
			write_first_ligne(x);
		}
		else if (y - 1 == idy)
		{
			write_last_ligne(x);
		}
		else
		{
			write_middle_line(x);
		}
		idy++;
	}
}
