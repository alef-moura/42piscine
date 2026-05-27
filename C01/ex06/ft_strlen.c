/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:26:16 by alesferr          #+#    #+#             */
/*   Updated: 2026/02/01 17:39:10 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "hello world!";
	int	cot;

	cot = ft_strlen(str);
	printf("value of counter is %d", cot);
	return (0);
}*/
