/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:42:19 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/04 21:27:37 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j + 1] == '\0')
			{
				return (str + (i - j));
			}
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	char str1[] = "";
	char str2[] = "test";
	
	char *test1 = strstr(str1, str2);
	

	printf("Print only str: %s\n" , test1);
}
*/