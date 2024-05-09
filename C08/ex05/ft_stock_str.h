/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:20:00 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/11 23:07:25 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str {
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

int					ft_strlen(char *str);
char				*ft_strdup(char *src);
t_stock_str			*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

#endif