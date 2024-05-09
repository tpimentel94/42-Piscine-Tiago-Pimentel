/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:10:38 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/05 19:31:23 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while ((i * i) < nb && i < 46341)
		i++;
	if (i * i == nb)
		return ((int) i);
	return (0);
}

/*
int	main(void)
{
	printf("%d \n", ft_sqrt(-1));
	printf("%d \n", ft_sqrt(2147395600));
	printf("%d \n", ft_sqrt(2147488281));
	printf("%d \n", ft_sqrt(121));
	printf("%d \n", ft_sqrt(81));
}
*/