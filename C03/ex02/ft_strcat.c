/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:59:52 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/01/31 17:09:37 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	len = i;
	i = 0;
	while (src[i] != '\0')
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
	char str1[20] = "hello";
	char str2[] = "hel ";
	
	printf("Result my: %s, other: %s.\n", ft_strcat(str1,str2), strcat(str1,str2));
}
*/