/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:52:01 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/11 23:04:25 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (0);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*pointer; 

	i = 0;
	pointer = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!pointer)
	{
		pointer = NULL;
		return (pointer);
	}
	while (i < ac)
	{
		pointer[i].size = ft_strlen(av[i]);
		pointer[i].str = av[i];
		pointer[i].copy = ft_strdup(av[i]);
		i++;
	}
	pointer[i].str = 0;
	return (pointer);
}

int	main(int argc, char *argv[])
{
	t_stock_str	*par;
	char		*array[10];

	array[0] = "lol";
	array[1] = "lol";
	array[2] = "pouic";
	array[3] = "lol";
	array[4] = "lol";
	array[5] = "";
	array[6] = " ";
	array[7] = "lol";
	array[8] = "youpiiii";
	array[9] = "PUgQs1Id2r7PIomOxbEv101KQbGqMTFyd6UH";
	par = ft_strs_to_tab(10, array);
	ft_show_tab(par);
	free(par);
}
