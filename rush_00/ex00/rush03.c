/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjunior- < hjunior-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:36:11 by hjunior-          #+#    #+#             */
/*   Updated: 2022/02/07 01:02:27 by hjunior-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_display(char first, char middle, char last, int y);

void	rush(int x, int y)
{
	int	actual_row;

	actual_row = 1;
	while (actual_row <= y)
	{
		if (actual_row == 1)
		{
			ft_display('A', 'B', 'C', x);
		}
		if (actual_row > 1 && actual_row < y)
		{
			ft_display('B', ' ', 'B', x);
		}
		if (y != 1)
		{
			if (actual_row == y)
			{
				ft_display('C', 'B', 'A', x);
			}			
		}
		ft_putchar('\n');
		actual_row++;
	}
}

void	ft_display(char first, char middle, char last, int x)
{
	int	actual_mid_ch;

	actual_mid_ch = 2;
	if (x == 1)
	{
		ft_putchar(first);
		return ;
	}
	else
	{
		ft_putchar(first);
		while (actual_mid_ch < x)
		{
			ft_putchar(middle);
			actual_mid_ch++;
		}
		ft_putchar(last);
		return ;
	}
}
