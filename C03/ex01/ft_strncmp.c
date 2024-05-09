/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:52:22 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/04 21:23:25 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
	if (i >= n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char str1[] = "hello";
	char str2[] = "hello";
	unsigned int n = 20;
	
	printf("Result my %d, other %d\n", ft_strncmp(str1,str2, n), 
		strncmp("hello","hello", 20));
}
*/