/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <pegabrie@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:33:04 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/29 13:49:13 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;
	num = '0';

	while(num <= '9')
	{
		write(1, &num, 1);
		num--;
	}
}

int main (void)
{
	ft_print_numbers();
	return 0;
}
