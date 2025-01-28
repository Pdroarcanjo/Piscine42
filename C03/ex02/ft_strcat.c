/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pegabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:15:56 by pegabrie          #+#    #+#             */
/*   Updated: 2025/01/27 14:42:31 by pegabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *scr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (scr[i] != '\0')
	{
		dest[j] = scr[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int main (void)
{
	char src[] = "ola,";
	char dest[] = "tudo bem?";
	
	printf("%s", ft_strcat(dest, src));

}
