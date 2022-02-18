/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:56:29 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/18 02:39:39 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fatorial;
	int	resposta;

	fatorial = nb;
	resposta = 1;
	if (fatorial < 0)
	{
		return (0);
	}
	else if (fatorial == 0 || fatorial == 1)
	{
		return (1);
	}
	while (fatorial > 1)
	{
		resposta = resposta * fatorial;
		fatorial--;
	}
	return (resposta);
}
