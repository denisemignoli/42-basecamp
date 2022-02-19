/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:43:57 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/18 03:56:01 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	base;
	int	expoente;

	base = 4;
	expoente = 3;
	printf("O número da potência é %d\n", ft_recursive_power(base, expoente));
}
