/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:39:20 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/20 22:42:31 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z')))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{	
int	is_uppercase;
	char a[] = "BRUV";
	is_uppercase = ft_str_uppercase(a);
	printf("%d\n", is_uppercase);

}*/
