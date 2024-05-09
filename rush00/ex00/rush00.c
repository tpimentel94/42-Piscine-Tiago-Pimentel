/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:31:39 by rbomfim-          #+#    #+#             */
/*   Updated: 2024/01/28 20:19:10 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int l, int m, int r)
{
	int	space;

	space = 1;
	if (x > 0)
	{
		ft_putchar(l);
	}
	while (space < (x - 1))
	{
		ft_putchar(m);
		space++;
	}
	if (x > 1)
	{
		ft_putchar(r);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	space;

	space = 0;
	if (x > 0 && y > 0)
	{
		print_line(x, 'o', '-', 'o');
	}
	else
	{
		write(1, "Enter positive integer numbers as parameter", 44);
		write(1, "\n", 1);
	}
	while (space < y - 1 && x > 0)
	{
		print_line(x, '|', ' ', '|');
		space++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, 'o', '-', 'o');
	}
}
