/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:02:21 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/01/28 15:08:16 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int x, y;
	int *a, *b;

	x = 1;
	y = 2;

	a = &x;
	b = &y;

	printf(" x = %d , y = %d \n", x , y);

	ft_swap(a,b);
	
	printf(" x = %d , y = %d \n", x , y);

}*/