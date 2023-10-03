/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 01:03:54 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/16 10:35:55 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (j == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (j == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "salut, COMMENT tU v7As ? 42mots quarante-deux; cinquante+et+un";
//	char str[] = "SALUT";
	printf("%s \n", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
