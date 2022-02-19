/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:19:32 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/18 22:56:33 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	txt1[] = "abcdef";
	char	txt2[] = "abcdEF";

	printf("O valor de retorno é de %d", ft_strncmp(txt1, txt2, 5));
}
