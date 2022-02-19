/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:30:45 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/10 20:06:52 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	// int	tab[5];
	// int	i;

	// i = 0;
	// tab[0] = 1;
	// tab[1] = 2;
	// tab[2] = 3;
	// tab[3] = 4;
	// tab[4] = 5;

	int    size;
    int    counter;

    size = 5;
    counter = 0;

    int    tab[size];

    while (counter < size)
    {
        tab[counter] = counter;
        printf("%d ", tab[counter]);
        counter++;
    }
	
	counter = 0;
	ft_rev_int_tab(tab, size);
	while (counter < size)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
}
