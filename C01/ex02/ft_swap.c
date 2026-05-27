/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:41:06 by alesferr          #+#    #+#             */
/*   Updated: 2026/01/28 16:21:39 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	
	a = 3;
	b = 10;
	int	*pa = &a;
	int	*pb = &b;
	ft_swap(pa, pb);
	printf("value of a is %d and value of b is %d", a, b);
	return (0); 
}*/
