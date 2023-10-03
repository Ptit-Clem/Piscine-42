/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <cde-keuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:37:28 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/21 17:46:54 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src)
{
	char * str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	str = malloc(sizeof(char) * (len + 1));
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return(str);

}


int	main(void)
{

	char src[] = "testtts";
	printf("Must all be same (2 lines):\n%s\n%s",
	src, ft_strdup(src));
}

