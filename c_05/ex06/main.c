/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 05:18:00 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/18 16:47:14 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	primo;

	primo = 3;
	printf("O retorno do número informado é %d\n", ft_is_prime(primo));
}
