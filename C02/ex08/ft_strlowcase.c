/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:02:03 by alesferr          #+#    #+#             */
/*   Updated: 2026/02/03 17:38:25 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	i[] = "HeLlo";

	printf("%s", ft_strlowcase(i));
	return (0);
}*/
