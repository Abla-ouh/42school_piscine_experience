/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 08:53:39 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/22 09:33:43 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		pow = pow * nb;
		power--;
	}
	return (pow);
}
/*
#include <stdio.h>
int main() {
  printf("%d ^ %d = %d\n", -1534, -530, ft_iterative_power(-1534, -530));
    printf("%d ^ %d = %d\n", 0, 0, ft_iterative_power(0, 0));
    printf("%d ^ %d = %d\n", 2894, 0, ft_iterative_power(2894, 0));
    printf("%d ^ %d = %d\n", 3865, 1, ft_iterative_power(3865, 1));
    printf("%d ^ %d = %d\n", 0, 2, ft_iterative_power(0, 2));
    printf("%d ^ %d = %d\n", 3, 4, ft_iterative_power(3, 4));
    printf("%d ^ %d = %d\n", 5, 5, ft_iterative_power(5, 5));
    printf("%d ^ %d = %d\n", 6, 6, ft_iterative_power(6, 6));
    printf("%d ^ %d = %d\n", 7, 8, ft_iterative_power(7, 8));
    printf("%d ^ %d = %d\n", -5, 9, ft_iterative_power(-5, 9));
    printf("%d ^ %d = %d\n", -1, 10, ft_iterative_power(-1, 10));
  return 0;
}*/
