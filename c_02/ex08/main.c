/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:10:24 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/14 19:14:24 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	txt[] = "ABCDE";
	
	printf("O valor antes é de %s\n", txt);
	printf("O valor depois é de %s ", ft_strlowcase(txt));
}
