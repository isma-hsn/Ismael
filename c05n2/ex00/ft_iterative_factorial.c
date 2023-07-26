/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihsaini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:14:10 by ihsaini           #+#    #+#             */
/*   Updated: 2023/07/23 02:15:05 by ihsaini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	max;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	max = nb - 1;
	while (max > 0)
	{
		nb *= max;
		max--;
	}
	return (nb);
}
