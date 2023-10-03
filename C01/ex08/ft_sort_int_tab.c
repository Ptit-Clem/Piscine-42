/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <cde-keuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:19:10 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/24 19:30:36 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size -1)
	{	
		j = 0;
		while (j != size - 1)
		{	
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
	i++;
	}
}
/*int	main(void)
{
	int c[10] = {55,-10,59,0,54,-28,99,0,1,-1};
	ft_sort_int_tab(c, 10);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", 
	c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9]);
}*/
