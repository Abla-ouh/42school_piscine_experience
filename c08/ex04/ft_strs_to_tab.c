/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoussa <aamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:58:21 by aamoussa          #+#    #+#             */
/*   Updated: 2021/08/24 15:46:55 by aamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*P;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str) + 1;
	P = (char *)malloc(sizeof(char) * len);
	if (P == 0)
		return (0);
	while (str[i])
	{
		P[i] = str[i];
		i++;
	}
	P[i] = 0;
	return (P);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*P;
	int			i;

	P = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (P == 0)
		return (0);
	i = 0;
	while (i < ac && av[i])
	{
		P[i].size = ft_strlen(av[i]);
		P[i].str = av[i];
		P[i].copy = ft_strdup(av[i]);
		i++;
	}
	P[i].str = 0;
	return (P);
}
