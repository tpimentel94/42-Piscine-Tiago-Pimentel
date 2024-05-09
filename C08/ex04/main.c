/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:52:01 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/11 23:04:14 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	c = '0';
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else 
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		if (nb <= 9)
		{
			c = '0' + nb;
			write(1, &c, 1);
		}
	}
}

void	ft_show_tab(t_stock_str *par)
{
	int	size;
	int	i;

	i = 0;
	while (par[i].str)
	{
		i++;
	}
	size = i;
	i = 0;
	while (i < size)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

//int	main(int argc, char *argv[])
//{
//	t_stock_str	*par;
//	char		*array[10];

//	array[0] = "lol";
//	array[1] = "lol";
//	array[2] = "pouic";
//	array[3] = "lol";
//	array[4] = "lol";
//	array[5] = "";
//	array[6] = " ";
//	array[7] = "lol";
//	array[8] = "youpiiii";
//	array[9] = "PUgQs1Id2r7PIomOxbEv101KQbGqMTFyd6UH";
//	par = ft_strs_to_tab(10, array);
//	ft_show_tab(par);
//	free(par);
//}

int	main(int argc, char *argv[])
{
	t_stock_str	*stock;

	if (argc > 1)
	{
		stock = ft_strs_to_tab(argc, argv);
		while (stock->str)
		{
			printf("str: %s\n", stock->str);
			printf("copy: %s\n", stock->copy);
			printf("size: %d\n", stock->size);
			stock++;
			printf("\n");
		}
	}
	return (0);
}
