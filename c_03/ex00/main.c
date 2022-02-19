/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:53:07 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/16 02:01:08 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	txt1[] = "aBCDEFGHIJ";
	char	txt2[] = "Abcdefg";

	printf("O valor de retorno é de %d", ft_strcmp(txt1, txt2));
}
