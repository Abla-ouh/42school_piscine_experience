/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:18:07 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/14 19:33:31 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhexa(char nb)
{
	char	*hex;

	write(1, "\\", 1);
	hex = "0123456789abcdef";
	ft_putchar(hex[nb / 16]);
	ft_putchar(hex[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] < 32) || str[i] == 127)
			ft_printhexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
