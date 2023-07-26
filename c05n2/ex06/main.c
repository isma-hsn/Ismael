/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihsaini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 03:55:02 by ihsaini           #+#    #+#             */
/*   Updated: 2023/07/23 03:57:07 by ihsaini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int nb = 17;
	int result = ft_is_prime(nb);
	
	if (result == 1)
		printf("%d is a prime number.\n", nb);
	else
		printf("%d is not a prime number.\n", nb);
	return (0);
}

