/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:55:49 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/15 23:56:09 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nbr_base(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}	tab[0] = "Test";
	tab[1] = "123";
	tab[2] = "Tiago";
	tab[3] = "  ttt";

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = src;
	return (dest);
}
