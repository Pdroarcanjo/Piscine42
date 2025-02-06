/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:29:16 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/27 17:37:45 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size))
		size++;
	return (size);
}
/*
int	main(void)
{
	char	*s;

	s = "pedrocas";
	printf("%d\n", ft_strlen(s));
}*/
