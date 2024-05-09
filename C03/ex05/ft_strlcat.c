/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:04:57 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/04 21:57:55 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";

	printf("Sending str1 : %s, and str2 : %s \n" , str1 , str2);
	int res = strlcat(str1 , str2 , 3);

	printf(" Result str1 : %s, len : %d and str2 : %s\n" , str1 , res, str2);

}
*/