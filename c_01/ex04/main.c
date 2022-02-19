/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:38:52 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/10 14:23:50 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 20;
	n2 = 10;
	printf("%d\n", n1);
	printf("%d\n", n2);
	ft_ultimate_div_mod(&n1, &n2);
	printf("%d\n", n1);
	printf("%d\n", n2);
}
