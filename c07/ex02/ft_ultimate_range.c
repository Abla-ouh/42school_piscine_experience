/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:59:28 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/24 18:21:20 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	sizeu;
	int	*tab;

	sizeu = max - min;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * sizeu);
	if (!tab)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int *ptr;
	int i;
	int function;
	i = 0;
	function = ft_ultimate_range(&ptr,5,10);
	while(i < function)
	{
		printf("%d\n",ptr[i]);
		i++;
	}
}*/
