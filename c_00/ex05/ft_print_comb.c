/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:45:27 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/08 20:43:39 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char i, char j, char k);

// ordem crescente -> portanto i < j < k
// diferentes combinações de três números -> crescente

// 012
// ijk

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				ft_print(i, j, k);
				k++;
			}
			k = '2';
			j++;
		}
		j = '1';
		i++;
	}
}

void	ft_print(char i, char j, char k)
{
	if (i < j && j < k)
	{
		write (1, &i, 1);
		write (1, &j, 1);
		write (1, &k, 1);
		if (i != '7')
			write (1, ", ", 2);
	}
}
