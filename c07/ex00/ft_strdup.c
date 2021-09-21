/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:20:35 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/24 18:33:32 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int			i;
	char		*copy;

	i = 0;
	while (src[i])
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		copy [i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*#include <stdio.h>
int main()
{
	char str[] = "yelowwww";
	printf("%s\n",ft_strdup(str));
}*/
