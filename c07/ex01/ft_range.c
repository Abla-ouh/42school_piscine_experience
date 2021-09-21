/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:34:48 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/24 18:24:43 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	sizeu;
	int	*range;

	sizeu = max - min;
	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * sizeu);
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int	main()
{
	int	i = 0;
	int rangeu_kun = ft_range(atoi(v[1]), atoi(v[2]));
	int	sizeu_sama = atoi(v[2]) - atoi(v[1]);
	printf(" %p \n", ft_range(8,10));
	while (i < sizeu_sama)
	{
		printf("%d\t", rangeu_kun[i]);
		i++;
	}
	return (0);
}*/
