/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:19:00 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/11 22:54:51 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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
