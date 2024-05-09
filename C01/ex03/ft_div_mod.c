/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:19:20 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/01/28 15:25:50 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a - (a / b) * b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int d;
	int m;

	a = 18;
	b = 5;

	int	*div;
	int	*mod;

	div = &d;
	mod = &m;

	ft_div_mod(a , b, div, mod);

	printf(" a %d, b %d, div %d, mod %d \n", a, b , d , m);
}
*/