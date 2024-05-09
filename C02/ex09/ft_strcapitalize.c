/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:55:29 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/01/31 15:23:57 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new_word;

	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' 
				&& str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (new_word && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*
 int	main(void)
 {
 	char str[] = "sLUut,comment tu vas? 42mots quarante-deux; "
 					"cinquante+et+un ";
	printf("%s\n", str);
 	ft_strcapitalize(str);
 	printf("%s\n", str);
 }
*/