/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:34:44 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/16 01:40:54 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char    str[] = "olar mundo";
    char    to_find[] = "ar";

    printf("ANTES:\n\tstr: %s\n\tto_find: %s\n", str, to_find);
    printf("DEPOIS:\n\t%s\n", ft_strstr(str, to_find));
    
    return (0);
}
