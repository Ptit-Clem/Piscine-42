/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 00:59:14 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/13 01:02:31 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}	
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str1[] = "Salut les gars Comment WWwww 000 !";
	printf("Original: %s ", str1);
	printf("\nFinal: %s ", ft_strlowcase(str1));

	return (0);
}*/
