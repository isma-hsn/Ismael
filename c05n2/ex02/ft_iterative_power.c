/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihsaini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 01:12:14 by ihsaini           #+#    #+#             */
/*   Updated: 2023/07/23 18:27:19 by ihsaini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	else if (nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	i = 0;
	result = 1;
	while (i++ < power)
		result *= nb;
	return (result);
}
