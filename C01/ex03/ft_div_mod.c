/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:23:22 by alesferr          #+#    #+#             */
/*   Updated: 2026/01/28 16:18:43 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	int	*di = &a;
	int	*mo = &b;
	printf("value a: %d, value b: %d \n", a, b);
	ft_div_mod(a, b, di, mo);
	printf("value div: %d, value mod: %d", *di, *mo);
	return (0);
}*/
