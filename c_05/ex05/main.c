/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:56:44 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/18 15:14:16 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 24;
	printf ("O resultado da raiz quadrada é de %d\n", ft_sqrt(nb));
}
