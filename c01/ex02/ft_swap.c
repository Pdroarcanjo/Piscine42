/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:12:07 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/18 22:27:15 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
  	int	x;
  	int	y;

	x = 5;
	y = 10;
	printf("Antes: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("depois: x = %d, y = %d\n", x, y);
	return (0);
}*/
