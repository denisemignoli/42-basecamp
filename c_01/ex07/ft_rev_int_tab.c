/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:30:42 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/11 02:34:06 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	size = size - 1;
	while (count < size)
	{
		temp = tab[size];
		tab[size] = tab[count];
		tab[count] = temp;
		count++;
		size--;
	}
}
