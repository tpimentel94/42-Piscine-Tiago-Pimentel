/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:47:37 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/05 16:42:17 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(0,-8));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 1));
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(5, 5));
}
*/
