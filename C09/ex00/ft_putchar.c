/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:21:20 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/01/25 11:38:33 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Add write library
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
