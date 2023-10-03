/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <cde-keuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:19:50 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/17 10:50:48 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}	
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char	s1a[10] = "Test1";
	char 	s2a[] = "OKK";
	char 	s1b[10] = "Test1";
	char 	s2b[] = "OKK";
	char 	s3a[10] = "Same";
	char 	s4a[] = "Size";
	char 	s3b[10] = "Same";
	char 	s4b[] = "Size";
	char 	s5a[20] = "Shorter";
	char 	s6a[] = "ThanMyself";
	char 	s5b[20] = "Shorter";
	char 	s6b[] = "ThanMyself";
	char 	s7a[20] = "Shorter";
	char 	s8a[] = "ThanMyself";
	char	s7b[20] = "Shorter";
	char	s8b[] = "ThanMyself";
	printf("%s\n", ft_strlcat(s1a, s2a, 1)== 
	ft_strlcat(s1b, s2b, 1) ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s3a, s4a, 10)== 
	ft_strlcat(s3b, s4b, 10) ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s5a, s6a, 4)== 
	ft_strlcat(s5b, s6b, 4) ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s7a, s8a, 0)== 
	ft_strlcat(s7b, s8b, 0) ? "Success" : "Fail");
}*/
