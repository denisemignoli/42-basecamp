/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:13:27 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/10 13:58:58 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*a1;
	int	**a2;
	int	***a3;
	int	****a4;
	int	*****a5;
	int	******a6;
	int	*******a7;
	int	********a8;
	//int	*********a9;

	a = 0;
	a1 = &a;
	a2 = &a1;
	a3 = &a2;
	a4 = &a3;
	a5 = &a4;
	a6 = &a5;
	a7 = &a6;
	a8 = &a7;
	//a9 = &a8;
	printf("%d\n", a);
	ft_ultimate_ft(&a8);
	printf("%d\n", a);
	return (0);
}
