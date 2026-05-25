/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:28:41 by alesferr          #+#    #+#             */
/*   Updated: 2026/02/01 15:37:02 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;
	int	n2;

	n1 = *a / *b;
	n2 = *a % *b;
	*a = n1;
	*b = n2;
}

/*#include <stdio.h>

int	main(void)
{
	int	p1;
	int	p2;
	p1 = 10;
	p2 = 3;
	int	*a = &p1;
	int	*b = &p2;
	printf("value p1: %d, value p2: %d \n", p1, p2);
	ft_ultimate_div_mod(a, b);
	printf("value a: %d, value b: %d \n", *a, *b);
	return (0);
}*/
