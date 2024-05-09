/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:28:21 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/08 17:37:23 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_putchar('\n');
	ft_swap(&a, &b);
	printf("\na: %d \nb: %d\n", a, b);
	ft_putstr("Hello World\n");
	printf("len: %d.\n", ft_strlen("Hello World"));
	printf("Delta: %d\n", ft_strcmp("Hello1", "Hello2"));
}
