/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:15:57 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/18 02:36:42 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fatorial;

	fatorial = nb;
	if (fatorial < 0)
		return (0);
	if (fatorial == 0 || fatorial == 1)
		return (1);
	return (fatorial * ft_recursive_factorial(fatorial - 1));
}
