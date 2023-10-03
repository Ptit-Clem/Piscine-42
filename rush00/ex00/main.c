/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gegeniey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 08:55:55 by gegeniey          #+#    #+#             */
/*   Updated: 2023/09/13 09:54:14 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(2, 2);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	ft_putchar('\n');
	rush(123, 42);
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
