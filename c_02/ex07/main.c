/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:53:16 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/14 19:08:20 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	txt[] = "abcde";
	
	printf("O valor antes é de %s\n", txt);
	printf("O valor depois é de %s ", ft_strupcase(txt));
}
