/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:14:03 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/15 23:22:38 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (-1);
	i = 0;
	*range = array;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (size);
}


int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;
	
	i = 0;
	min = -5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, \n", tab[i]);
		i++;
	}
}
