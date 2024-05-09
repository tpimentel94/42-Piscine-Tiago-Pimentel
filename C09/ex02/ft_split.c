/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:11:22 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/14 15:28:16 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != 0)
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;
	int	init;

	init = 0;
	words = 0;
	i = 0;
	while (str[i] != 0)
	{
		while (str[i] != 0 && check_sep(str[i], charset) == 1)
		{
			i++;
			init = 0;
		}
		while (str[i] != 0 && check_sep(str[i], charset) == 0)
		{
			if (init == 0)
			{
				words++;
				init = 1;
			}
			i++;
		}
	}
	return (words);
}

char	*ft_strlcpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

void	populate_array(char **array, char *str, char *charset)
{
	int	i;
	int	word;
	int	len;

	len = 0;
	word = 0;
	i = 0;
	while (str[i] != 0)
	{
		while (str[i] != 0 && check_sep(str[i], charset) == 1 && str[i++] != 0)
			len = 0;
		while (str[i] != 0 && check_sep(str[i], charset) == 0)
		{
			if (len == 0) 
				word++;
			len++;
			i++;
		}
		if (len != 0)
		{
			array[word - 1] = malloc(sizeof(char) * (len + 1));
			array[word - 1] = ft_strlcpy(array[word - 1], &str[i - len], len);
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		size;

	size = count_words(str, charset);
	array = malloc(sizeof(char *) * (size + 1));
	if (!array)
		return (NULL);
	array[size] = NULL;
	populate_array(array, str, charset);
	return (array);
}
/*
int	main(void)
{
	char **split = ft_split("This is my, teste ,top,test", ", " );
	int i = 0;
	   while (split[i] != 0)
		printf("%s\n", split[i++]);
	return (0);
}
*/