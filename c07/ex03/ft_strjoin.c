/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:49:07 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/25 09:02:10 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	stralloc(char *sep, char **strs, int size)
{
	int	i;
	int	j;

	i = 0;
	j = (my_strlen(sep) * size - my_strlen(sep) + 1);
	while (i < size)
		j += my_strlen(strs[i++]);
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	int			j;
	int			k;
	char		*str;

	str = malloc(sizeof(char *) * stralloc(sep, strs, size));
	if (size <= 0)
		return (NULL);
	if (!str)
		return (NULL);
	j = 0;
	k = 0;
	while (stralloc(sep, strs, size) > j && size > k)
	{
		i = 0;
		while (i < my_strlen(strs[k]) && strs[k][i])
			str[j++] = strs[k][i++];
		k++;
		i = 0;
		while (sep[i] && size > k)
			str[j++] = sep[i++];
	}
	str[j] = '\0';
	return (str);
}

int	main(int c, char **v)
{
	char *join; 

	join = ft_strjoin(c, v, " | ");
	printf("%s", join);
}
