/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <pegabrie@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:55:01 by pegabrie          #+#    #+#             */
/*   Updated: 2025/02/03 20:55:16 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 1 || power < 1 || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	printf("%i\n", ft_recursive_power(2, 3));
}
