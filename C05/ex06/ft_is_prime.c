/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:16:14 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/05 16:44:02 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(-1));
	printf("%d \n", ft_is_prime(2));
	printf("%d \n", ft_is_prime(101));
	printf("%d \n", ft_is_prime(2147483647));
}
*/