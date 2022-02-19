/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:03:00 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/18 14:43:03 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	base;
	int	expoente;

	base = 2;
	expoente = 3;
	printf("O número da potência é %d\n", ft_iterative_power(base, expoente));
}
