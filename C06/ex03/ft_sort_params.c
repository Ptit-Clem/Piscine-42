/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <cde-keuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:45:15 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/27 14:28:15 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i++ < argc - 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	fonction(int argc, char **argv)
{
	char	*swp;
	int		k;
	int		i;

	k = 1;
	i = 1;
	while (k > 0)
	{
		k = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (i + 1 < argc && ft_strcmp(argv[i + 1], argv[i]) < 0)
			{
				swp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swp;
				k = 1;
			}
			i++;
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	fonction(argc, argv);
	display(argc, argv);
	return (0);
}
