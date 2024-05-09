/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:50:49 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/11 17:39:04 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	long long	i;
	int			*range;

	i = 0;
	if (max <= min)
	{
		range = NULL;
		return (range);
	}
	range = (int *) malloc(sizeof(int) * (max - min));
	if (!range)
	{
		range = NULL;
		return (range);
	}
	while (max > min)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	long long	size;

	min = 2;
	max = 2;
	size = max - min;
	printf("size = %lld\n",size);
	tab = ft_range(min, max);
	if (!tab)
		printf("NULL pointer. %p", tab);
	//printf("%d, ", tab[0]);
	//printf("%d, ", tab[1]);
	//printf("%d, ", tab[214748364]);
	printf("\n");
}
*/
