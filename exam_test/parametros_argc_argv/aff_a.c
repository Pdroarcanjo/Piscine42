/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <pegabrie@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:36:01 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/29 17:09:31 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char *argv)
{
	if (argc < 2)
	{
		write(1, "a\n", 2);
		return 0;
	}
	int	i;
	i = 0;
	while(argv[1][i] != '\0')
	{
		if(! (argv[1][i] == 'a'))
		{
			write(1, "\n", 1);
			return 0;
		}
		write(1, "a\n",1);
		i++;
	}

}
