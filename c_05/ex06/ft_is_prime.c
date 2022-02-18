/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 05:18:01 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/18 15:48:41 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	val_prime(int n)
{
	int	i;

	i = 3;
	if (n == 2)
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);
	while (i <= n && n % i == 0)
	{
		if (n / i != 1)
		{
			return (0);
			i++;
		}
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	if (val_prime(nb))
		return (1);
	return (0);
}
