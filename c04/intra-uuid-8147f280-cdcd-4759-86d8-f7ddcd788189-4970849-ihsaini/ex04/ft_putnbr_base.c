/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihsaini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:22:58 by ihsaini           #+#    #+#             */
/*   Updated: 2023/07/20 04:06:10 by ihsaini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	chek_b(char *b)
{
	int	i;
	int	j;

	if (!b || !b[0] || !b[1])
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] == '-' || b[i] == '+')
			return (0);
		j = i + 1;
		while (b[j])
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	recur(int nbr, char *base, int i)
{
	char	ch;

	if (nbr < i)
	{
		ch = base[nbr];
		write(1, &ch, 1);
	}
	else
	{
		recur(nbr / i, base, i);
		ch = base[nbr % i];
		write(1, &ch, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (chek_b(base))
	{
		while (base[i])
		{
			i++;
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		recur(nbr, base, i);
	}
}
