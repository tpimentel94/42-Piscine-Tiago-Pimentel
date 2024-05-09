/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:14:02 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/11 23:07:31 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

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

void	ft_show_tab(struct s_stock_str *par)
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
