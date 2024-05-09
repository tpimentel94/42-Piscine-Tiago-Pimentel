/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:30:25 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/05 19:31:56 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

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

int	ft_find_next_prime(int nb)
{
	long	i;

	i = nb;
	while (ft_is_prime(i) == 0)
		i++;
	return ((int) i);
}

/*
int main(void)
{
	printf("%d\n" , ft_find_next_prime(-1));
	printf("%d\n" , ft_find_next_prime(2147395601));
	printf("%d\n" , ft_find_next_prime(3));
}
*/