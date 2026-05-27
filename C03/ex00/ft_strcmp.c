/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:08:53 by alesferr          #+#    #+#             */
/*   Updated: 2026/02/04 12:29:44 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	a[] = "Good";
	char	b[] = "God";

	printf("word a is %s, and word b is %s", a, b);
	printf("Comparison is: %d", ft_strcmp(a, b));
	return (0);
}*/
