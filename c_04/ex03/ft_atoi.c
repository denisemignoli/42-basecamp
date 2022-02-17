/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:28:09 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/17 02:08:53 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_valid_number(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	char	*c;
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	c = str;
	while (((*c >= '\t' && *c <= '\r') || *c == ' ') && *c != '\0')
		c++;
	while (*c == '-' || *c == '+')
	{
		if (*c == '-')
			sign *= -1;
		c++;
	}
	while (is_valid_number(*c))
	{
		result = (result * 10) + (*c - '0');
		c++;
	}
	return (sign * result);
}
