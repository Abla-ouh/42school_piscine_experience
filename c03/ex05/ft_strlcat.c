/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:39:44 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/17 18:05:29 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	total;

	total = 0;
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	dlen = i;
	slen = j;
	total = slen;
	if (dlen <= size)
		total += dlen;
	else
		total += size;
	j = 0;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (total);
}
