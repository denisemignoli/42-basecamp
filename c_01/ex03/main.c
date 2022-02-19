/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:06:18 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/10 14:16:24 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 13;
	b = 2;
	div = 0;
	mod = 0;

	printf("%d\n", div);
	printf("%d\n", mod);

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n", div);
	printf("%d\n", mod);
}
