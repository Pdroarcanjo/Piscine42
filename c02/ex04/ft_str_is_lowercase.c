/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:21:35 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/20 22:37:49 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{	
int	is_lowercase;
	char a[] = "bruv";
	is_lowercase = ft_str_lowercase(a);
	printf("%d\n", is_lowercase);

}*/
