/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:27:15 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/16 10:18:23 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main()
{
	int i;
	char dest[40] = "Epic fail !!!!!";
	char src[40] = "Success";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 1), dest);
	i = 20;
	while (i < 15)
	{
		if (dest[i] != '\0')
		{
			printf("FAIL! Remainder of dst must be filled with 
			'\\0' characters, got %c (\\%x) at pos %d\n", 
			dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
	return (0);
}*/
