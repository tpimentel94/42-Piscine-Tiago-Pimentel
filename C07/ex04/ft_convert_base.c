/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:42:08 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/15 23:27:04 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		nbr_base(char c, char *str);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char src);

int	ft_atoi_base(char *nbr, char *base)
{
	int	i;
	int	signal;
	int	nb;

	nb = 0;
	signal = 1;
	i = 0;
	while (nbr[i] == ' ' || nbr[i] == '\f' 
		|| nbr[i] == '\n' || nbr[i] == '\r' 
		|| nbr[i] == '\t' || nbr[i] == '\v')
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signal *= -1;
		i++;
	}
	while (nbr_base(nbr[i], base) != -1)
	{
		nb = ft_strlen(base) * nb + nbr_base(nbr[i], base);
		i++;
	}
	return (nb * signal);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str [i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

char	*ft_nbr_base(int nb, char *base, char *nbr_base)
{
	if (nb < 0)
	{
		ft_strcat(nbr_base, '-');
		nb = -nb;
	}
	if (nb < ft_strlen(base))
	{
		ft_strcat(nbr_base, base[nb]);
	}
	else
	{
		ft_nbr_base(nb / ft_strlen(base), base, nbr_base);
		ft_nbr_base(nb % ft_strlen(base), base, nbr_base);
	}
	return (nbr_base);
}

int	ft_base_nbr_size(int nb, int len)
{
	int	size;

	size = 0;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	if (nb < len)
	{
		size++;
	}
	else
	{
		size = size + ft_base_nbr_size(nb / len, len);
		size = size + ft_base_nbr_size(nb % len, len);
	}
	return (size);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*to_nbr;
	int		size_to;

	if (check_base(base_from) == 1 && check_base (base_to) == 1)
	{
		nb = ft_atoi_base(nbr, base_from);
		size_to = ft_base_nbr_size(nb, ft_strlen(base_to));
		to_nbr = (char *) malloc(sizeof(char) * (size_to + 1));
		if (!to_nbr)
			return (NULL);
		to_nbr = ft_nbr_base(nb, base_to, to_nbr);
		to_nbr[size_to] = '\0';
		return (to_nbr);
	}
	else
	{
		return (NULL);
	}
}

int main(void)
{
	printf("%d\n" , ft_atoi_base("    ++--173a123", "0123456789"));
    char * test;
	test= ft_convert_base("   ++---101010a01010a34abc434", "01" , "abcdefghij");
    printf("%s\n", test);
}
