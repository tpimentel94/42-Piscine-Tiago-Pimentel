/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:10:17 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/01 15:21:50 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char str1[20] = "Teste";
	char str2[20] = "hello";
	
	char str3[20] = "Teste";
	char str4[20] = "hello";
	

	
	printf("Result my: %s.\n", ft_strncat(str1,str2, 4));
	printf("Result other: %s.\n", strncat(str3,str4, 4));
}
*/