/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:46:58 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/18 23:03:42 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>

int	main(void)

	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("before: x = %d, y = %d\n", x ,y);
	ft_ultimate_div_mod(&x, &y);
	printf("after: x = %d, y = %d\n", x, y);
	return(0);
}
*/
