/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:26:14 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/01/28 15:33:33 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpa;
	int	tmpb;

	tmpa = *a;
	tmpb = *b;
	*a = tmpa / tmpb;
	*b = tmpa - (tmpa / tmpb) * tmpb;
}
/*
int	main(void)
{
	int a = 18;
	int	b = 5;

	ft_ultimate_div_mod(&a, &b);

	printf(" div %d, mod %d\n", a , b);

}
*/