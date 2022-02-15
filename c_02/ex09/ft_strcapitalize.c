/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmignoli <dmignoli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:47:22 by dmignoli          #+#    #+#             */
/*   Updated: 2022/02/15 00:57:31 by dmignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (i == 0 && (str[counter] >= 'a' && str[counter] <= 'z'))
		{
			str[counter] -= ('a' - 'A');
			i++;
		}
		else if (i > 0 && (str[counter] >= 'A' && str[counter] <= 'Z'))
			str[counter] += ('a' - 'A');
		else if ((str[counter] < '0') || str[counter] > 'z')
			i = 0;
		else if (str[counter] > '9' && str[counter] < 'A')
			i = 0;
		else if (str[counter] > 'Z' && str[counter] < 'a')
			i = 0;
		else
			i++;
		counter++;
	}
	return (str);
}
