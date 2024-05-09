/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:40:42 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/15 23:55:46 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

long	ft_lenstrs(int size, char **strs, char *sep)
{
	long	i;
	long	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

void	ft_strcat(char *dest, char *src)
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
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		sizeaux;

	if (size <= 0)
	{
		//join = (char *)malloc(sizeof(char)*1);
		//printf("teste1.\n");
		//if (!join)
		//	return (NULL);
		//join = '\0';
		return (join);
	}
	join = (char *) malloc(sizeof(char) * (ft_lenstrs(size, strs, sep) + 1));
	if (!join)
		return (NULL);
	sizeaux = 0;
	while (sizeaux < size)
	{
		ft_strcat(join, strs[sizeaux]);
		sizeaux++;
		if (sizeaux < size)
			ft_strcat(join, sep);
	}
	ft_strcat(join, "\0");
	return (join);
}

/*
int	main(int argc, char **argv)
{
	char	**strs;
	char	*str;

	(void)argc;
	(void)argv;
	
	strs = (char**)malloc(sizeof(char *) * 5);
	if (!strs)
		return (1);
	//printf("testemalloc.\n");
	//strs[0] = "Chopin";
	//printf("testemalloc.\n");
	//strs[1] = "";
	//printf("testemalloc.\n");
	//strs[2] = "Mahler";
	//printf("testemalloc.\n");
	//strs[3] = "2323";
	//printf("testemalloc.\n");
	//strs[4] = "Beethoven";
	////str = "Beethoven";
	//printf("testemalloc.\n");
	//printf("testemalloc.\n");
	////printf("%s.\n", test[0]);
	//printf("teste0.\n");
	str = ft_strjoin(2, strs, ", ");
	printf("len : %d\n" , sizeof(strs));
	printf("%s.\n", str);
	free(str);
	free(strs);
}
*/


int	main(void)
{
	char	*tab[4];
	tab[0] = "Test";
	tab[1] = "123";
	tab[2] = "Tiago";
	tab[3] = "  ttt";
	char *test = ft_strjoin(4, tab, "Pasquale");
	printf("%s\n", test );
	return (0);
}