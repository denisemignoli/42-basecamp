/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 23:46:42 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/17 18:58:40 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char* source = "Techie Delight";
    char destination[20];
 
    size_t num = 2;
 
    // Copies the first `num` characters of the source to destination
    printf("%s\n", ft_strncpy(destination, source, num));
 
    return 0;
}
