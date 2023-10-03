/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-keuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:39:49 by cde-keuk          #+#    #+#             */
/*   Updated: 2023/09/26 10:39:51 by cde-keuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char	*str;
	int len;
	int	k;
	int	len_sep;
	
	k = 0;
	len = 0;
	while (k < size)
	{
		i = 0;
		while(strs[k][i] != '\0')
		{
			i++;
		}
		len = len + i;
		k++;
	}
	i = 0;
	len_sep = 0;
	while(sep[i] != '\0')
	{
		i++;			
	}
	len_sep =  i * (size - 2);
	i = 0;
	str = malloc(sizeof(char) * (len += len_sep) - 1);
	while (i < size )
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[len + len_sep] = '\0';
	return (str);
			
}	



int    main(int argc, char **argv)
{
    printf("./ex03/outputsaidthisisa___success :\n");
    printf("%s\n", ft_strjoin(argc -1, argv +1, " : "));
}
