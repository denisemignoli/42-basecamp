/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:04:08 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/17 17:40:14 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	origem[] = "abcdefg";
	char	destino [7];

	printf("O valor do origem é %s", origem);
	printf("\n");
	printf("O valor do destino é %s", ft_strcpy(destino, origem));
	printf("\n");
}
