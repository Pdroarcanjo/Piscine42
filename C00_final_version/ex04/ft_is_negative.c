/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:12:13 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/17 20:56:57 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}

/*int	main(void)
{
	ft_is_negative (-99);
	write (1, "\n", 1);
	ft_is_negative (0);
	write (1, "\n", 1);
	ft_is_negative (99);
	write (1, "\n", 1);
}*/
