/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:47:41 by abouhaga          #+#    #+#             */
/*   Updated: 2021/08/22 16:35:25 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*Temp;
	if (ft_strcmp(*s1,*s2) > 0)
	{
		Temp = *s1;
		*s1 = *s2;
		*s2 = Temp;
	}
}
int main(int ac, char **av)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	while (i < ac)
	{
		k = i + 1;
		while (k < ac)
		{
			ft_swap(&av[i],&av[k]);
			k++;
		}
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
