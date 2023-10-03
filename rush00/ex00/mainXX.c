/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainXX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gegeniey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 08:55:55 by gegeniey          #+#    #+#             */
/*   Updated: 2023/09/09 16:36:12 by gegeniey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rushxx(int x, int y, char *symbols);

int	verify_arguments(int argc, char *argv[])
{
	int		cpt_symbols;
	char	*p_argv;

	if (2 != argc)
	{
		return (1);
	}
	p_argv = argv[1];
	cpt_symbols = 0;
	while ('\0' != *p_argv)
	{
		cpt_symbols++;
		p_argv++;
	}
	if (7 != cpt_symbols)
	{
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	verify_arguments_ret;

	verify_arguments_ret = verify_arguments(argc, argv);
	if (0 < verify_arguments_ret)
	{
		return (verify_arguments_ret);
	}
	rushxx(5, 5, argv[1]);
	ft_putchar('\n');
	rushxx(5, 3, argv[1]);
	ft_putchar('\n');
	rushxx(5, 1, argv[1]);
	ft_putchar('\n');
	rushxx(1, 1, argv[1]);
	ft_putchar('\n');
	rushxx(2, 2, argv[1]);
	ft_putchar('\n');
	rushxx(1, 5, argv[1]);
	ft_putchar('\n');
	rushxx(4, 4, argv[1]);
	ft_putchar('\n');
	rushxx(123, 42, argv[1]);
	ft_putchar('\n');
	return (0);
}
