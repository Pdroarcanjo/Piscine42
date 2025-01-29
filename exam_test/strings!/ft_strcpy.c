/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <pegabrie@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:41:09 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/29 21:49:49 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;
	i = 0;
	while(s1[i])
	{
		s1[i] = s2[i];
		i++;
	}

}
int main(void)
{
	char	s1[] = "pedras";
	char	s2[] = "bruv";
	ft_strcpy(s1, s2);
	printf("%s", s2);

}
