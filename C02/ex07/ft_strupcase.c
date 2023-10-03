/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:34:43 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/13 00:56:56 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}	
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str1[] = "Salut les gars Comment WWwww 000 !";
	printf("Original: %s ", str1);
	printf("\nFinal: %s ", ft_strupcase(str1));

	return (0);
}*/
