/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:33:00 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/25 16:41:01 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_invalid(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!base[1] || !base[0])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
		i++;
	}
	return (1);
}

int	ft_strchr(char *base, char c, unsigned int *index, unsigned int *length)
{
	int	i;

	i = 0;
	while (base[*length])
		(*length)++;
	while (base[i])
	{
		if (base[i] == c)
		{
			*index = i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_sign(char *str, int i, int *p)
{
	int	sign;

	sign = 1;
	if (i >= 0)
	{
		while ((str[i] == '-' || str[i] == '+') && (i >= 0))
		{
			if (str[i] == '-')
				sign = sign * -1;
			i++;
		}
	}
	*p = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int				sign;
	unsigned int	res;
	int				i;
	unsigned int	index;
	unsigned int	base_lenght;

	base_lenght = 0;
	if (check_invalid(base))
	{
		i = 0;
		while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			i++;
		sign = ft_sign(str, i, &i);
		res = 0;
		while (ft_strchr(base, str[i], &index, &base_lenght) && str[i])
		{
			res = res * base_lenght + (index);
			i++;
		}
		return (res * sign);
	}
	return (0);
}
