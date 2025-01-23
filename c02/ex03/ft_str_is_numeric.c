/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:59:14 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/20 22:19:07 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= '0') && (str[i] <= '9')))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	int is_numeric;
	char a[] = "bruh";
		is_numeric =ft_str_is_numeric(a);
	printf("%d\n", is_numeric);
}*/
