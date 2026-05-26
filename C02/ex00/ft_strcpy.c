/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:59:16 by alesferr          #+#    #+#             */
/*   Updated: 2026/02/02 17:15:17 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	size;

	size = 0;
	while (src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	origin[] = "hello!";
	char	dest[20];

	ft_strcpy(dest, origin);
	printf("origin is %s, and destination is %s", origin, dest);
	return(0);
}*/
