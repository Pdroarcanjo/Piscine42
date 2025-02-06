/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <pegabrie@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:53:58 by pegabrie          #+#    #+#             */
/*   Updated: 2025/02/03 20:54:22 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	while (power--)
		ret *= nb;
	return (ret);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_power(-8, 2));
}*/
