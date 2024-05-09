/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:26:34 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/05 14:39:33 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
				return (0);
			if (base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	print_char(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (nbr < len)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
		print_char(nbr / len, base);
		write(1, &base[nbr % len], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	print_char(nbr, base);
}
/*
int	main(void)
{
	ft_putnbr_base(-1322332, "+01");
	write(1, "\n", 1);
	ft_putnbr_base(-42, "011");
	printf("\n");
	ft_putnbr_base(-42, "01123456789");
	printf("\n");
	ft_putnbr_base(-42, "0124567C89ABCDEF");
	printf("\n");
	ft_putnbr_base(-42, "poneyivif");
	printf("\n");

	return (0);
}
*/