/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:33:50 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/05 14:39:44 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
int	main(void)
{
	ft_putnbr(42);
	write( 1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	ft_putnbr(-0);
	write (1, "\n", 1);
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	return (0);
}
*/