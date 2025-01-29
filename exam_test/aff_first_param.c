/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <pegabrie@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:01:01 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/29 15:59:39 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char *argv[])

{
	int	i;

	i = 0;
	if(argc < 2)
	{
		write(1,"\n", 1);
		return 0;
	}
	
		while(argv[1][i]!= '\0' && argc)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	
	return 0;
}
