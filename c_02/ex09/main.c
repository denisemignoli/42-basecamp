/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:09:36 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/15 00:19:49 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcapitalize(char *str);

int    main(void)
{
    char    phrase1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

    printf("Frase 1 antes: %s\n", phrase1);
    printf("Depois: %s\n", ft_strcapitalize(phrase1));
}
