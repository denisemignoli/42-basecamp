/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:49:35 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/16 01:54:31 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{						
	char	txt1[] = "ABC";
	char	txt2[] = "abc";

	printf("O valor de retorno é de %s", ft_strcat(txt1, txt2));
}
